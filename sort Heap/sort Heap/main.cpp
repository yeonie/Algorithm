//
//  main.cpp
//  sort Heap
//
//  Created by 이동연 on 01/08/2020.
//  Copyright © 2020 litong. All rights reserved.
//

//버블, 선택, 삽입 그 이후로는 전부 nlogn

#include <iostream>
#include <stdio.h>

using namespace std;


int number = 9;
int heap[9]={7,6,5,8,3,5,9,1,6};

int main(void) {
    for(int i=1 ; i < number ; i++){
        int c = i;
        do{
            int root = (c-1)/2;
            if(heap[root]<heap[c]){
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root;
        }while(c!=0);
    }
    
    
    for(int i = number ; i >0 ; i--){
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        int root = 0;
        int c=1;
        do{
            c=2*root+1;
//            자식중에 더 큰 값 찾기
            if(heap[c]< heap[c+1]&& c<i-1){
                c++;
            }
//            루트보다 자식이 더 크다면 교환
            if(heap[root]<heap[c] && c<i){
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
            
        }while(c<i);
    }
    
    
    
    
    for(int i = 1 ; i <= number ; i++){
        cout<< heap[i] <<' ';
    }
}
