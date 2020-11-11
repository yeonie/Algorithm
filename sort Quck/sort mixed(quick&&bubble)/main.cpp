//
//  main.cpp
//  sort mixed
//
//  Created by 이동연 on 10/11/2020.
//  Copyright © 2020 litong. All rights reserved.

#include <iostream>
#include <vector>
using namespace std;

int n = 0;
int cnt = 0;
vector<int>A;

void bubbleSort(int n, vector<int>& A){
    int temp;
//    cout<<"did i??"<<endl;
    
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n-1-i ; j++){
            if(A[j] > A[j+1]){
                //swapping
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void quickSort(vector<int>& A, int start, int end){
    //원소가 1개인 경우
    if(start >= end){
        return;
    }
    //key 라고도 불리우는 pivot값은 첫번째 원소
    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;
    
    
    if(n-cnt>10){
//        cout<<"howManyTimes"<<endl;
        while(i <= j){
            //key 값보다 큰 값을 만날 때 까지 오른쪽으로 조금씩 이동해준다.
            while(A[i] <= A[pivot]){
                i++;
            }
            
            //pivot 값보다 작은 애 만날때 까지 왼쪽으로 하나식 이동.
            while((A[j] >= A[pivot])&&j>start){
                j--;
            }
            
            // 엇갈린 상태면 키 값과 교체
            if(i > j){
                temp = A[j];
                A[j] = A[pivot];
                A[pivot] = temp;
                cnt++;
            }
            else{
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
                cnt++;
            }
            quickSort(A, start, j-1);
            quickSort(A, j+1, end);
        }
    }
    else{
//        cout<<"quick -> bubble"<<endl;
        bubbleSort(n, A);
        return ;
//        return ;
        }
    
}

void mixedSort(int n, vector<int>& A){
    if(n>10){
        int start = 0;
        int end = n-1;
//        cout<<"qucksort"<<endl;
        quickSort(A, start, end);
    }
    else{
        bubbleSort(n, A);
//        cout<<"bubbleSort"<<endl;
    }
}

int main(int argc, const char * argv[]) {

    cin>> n;
    
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>> temp;
        A.push_back(temp);
    }
    
    mixedSort(n, A);
    for(int i = 0 ; i < n ; i ++){
        cout<<A[i]<<" ";
    }
    return 0;
}


