//
//  main.cpp
//  sort Merge
//
//  Created by 이동연 on 01/08/2020.
//  Copyright © 2020 litong. All rights reserved.
//
#include <stdio.h>
#include <iostream>

//무적권 nlogn이지만
//메모리공간 활용 비효율

using namespace std;

int n = 8;
int sorted[8];


void merge(int a[], int start , int middle, int end){
    int i = start;
    int j = middle+1;
    int k = start;
//    작은순서대로 배열에 삽입
    while(i <=middle && j <= end){
        if(a[i]<= a[j]){
            sorted[k] = a[i];
            i++;
        }
        else{
            sorted[k] = a[j];
            j++;
        }
        k++;
    }
//    앞 블록이 먼저 끝났을 경우 나머지 뒷 블록 데이터도 삽입
    if(i>middle){
        for(int t = j ; t<=end ; t++){
            sorted[k] = a[t];
            k++;
        }
    }
    else{
        for(int t= i; t<= middle ; t++){
            sorted[k] = a[t];
            k++;
        }
    }
    for(int t= start ; t<= end ; t++){
        a[t] = sorted[t];
    }
}

void mergeSort(int a[], int start, int end){
//    크기가 1보다 큰 경우
    if(start<end){
        int middle = (start+end)/2;
        mergeSort(a, start, middle);
        mergeSort(a, middle+1, end);
        merge(a, start, middle, end);
    }
}

int main(void){
    int array[8]= {7,6,5,8,3,5,9,1};
    mergeSort(array, 0, n-1);
    for(int i =0; i <n ; i++){
        printf("%d " , array[i]);
    }
    
}
