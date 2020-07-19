//
//  main.cpp
//  sort Bubble
//
//  Created by 이동연 on 19/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    //temp for swapping
    int i, j, temp;


    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    //array의 크기
//    printf("%d", sizeof(array)/sizeof(int));

    for(int i = 0 ; i < 10 ; i ++){
        for(int j = 0 ; j < 9-i ; j++){
            if(array[j] > array[j+1]){
                //swapping
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i = 0 ; i < 10 ; i ++){
        printf("%d ", array[i]);
    }



    return 0;
}


//맨 마지막거 하나씩 빼주면서 연산 비교하기 때문에 처음꺼 n 그다음 비교해주는갯수 N-1
//그렇다면 계산이 n * (n-1) * (n-2) * ... * 1 이 되기때문에
//O(n^2)
//
//
// 당장 옆의 수와 비교해서 작으면 앞으로 보내는거 무한반복
// 구현하기 존나 쉬운데, 제일 비효율






// self
//#include <iostream>
//int main(){
//
//    int i, j , temp;
//    int array[10] = {10,5,4,3,2,6,1,7,9,8};
//    int arr_len = sizeof(array)/sizeof(int);
//
//
//    for(int i = 0 ; i < arr_len ; i ++){
//        for(int j = 0 ; j < (arr_len-1) ; j++){
//            if(array[j] > array[j+1]){
//                temp = array[j];
//                array[j] = array[j+1];
//                array[j+1] = temp;
//            }
//        }
//    }
//
//    for(int i = 0 ; i < 10 ; i++){
//        printf("%d ", array[i]);
//    }
//
//    return 0;
//}
