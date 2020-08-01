//
//  main.cpp
//  sort Counting
//
//  Created by 이동연 on 01/08/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int arrab[30] = {1,3,2,4,5,2,3,4,1,2,3,2,1,2,3,1,3,2,4,1,5,5,5,1,3,2,4,2,2,1};
int arr[5] = {0};

//int main(void) {
//
//    for(int i =0; i < 30;i++){
//        if(arrab[i] == '\1'){
//            arr[0]++;        }
//        if(arrab[i] == '\2'){
//            arr[1]++;
//        }
//        if(arrab[i] == '\3'){
//            arr[2]++;
//        }
//        if(arrab[i] == '\4'){
//            arr[3]++;
//        }
//        if(arrab[i] == '\5'){
//            arr[4]++;
//        }
//    }
//
//
//    for(int i = 0; i < arr[0];i++){
//        cout<<'1'<<' ';
//    }
//    for(int i = 0; i < arr[1];i++){
//        cout<<'2'<<' ';
//    }for(int i = 0; i < arr[2];i++){
//        cout<<'3'<<' ';
//    }for(int i = 0; i < arr[3];i++){
//        cout<<'4'<<' ';
//    }for(int i = 0; i < arr[4];i++){
//        cout<<'5'<<' ';
//    }
//}

int main(void){
    for(int i = 0 ; i < 30 ; i++){
        arr[arrab[i]-1]++;
    }
    for(int i = 0 ; i < 5 ; i ++){
        for(int j = 0 ; j < arr[i];j++){
            cout<< (i+1) <<' ';
        }
    }
}
