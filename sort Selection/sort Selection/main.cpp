//
//  main.cpp
//  sort
//
//  Created by 이동연 on 19/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//


#include <iostream>

int main(int argc, const char * argv[]) {


    int i, j, min, index, temp;
    //배열은 다음과 같다.
    int array[10] = {1, 10, 5, 8 , 7, 6, 4, 3, 2, 9};

    for(int i = 0 ; i < 10 ; i++){
        min = 9999;
        for(int j = i ; j < 10 ; j++){
            if(min > array[j]){
                min = array[j];
                index = j;
            }
        }
        //swapping
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    for(int i = 0 ; i < 10 ; i ++){
        printf(" %d ", array[i]);
    }

    return 0;
}

// 선택정렬의 시간복잡도는 O(n^2)이다.
// n개를 살펴보고 min 값 하나 찾고, 찾은 최솟값 하나를 제외하고 (n-1)개에서 min값 찾는 과정을 반복해서
// n*(n-1)*(n-2)*...*1 = n(n+1)/2
// 고로 시간복잡도는 O(n^2)



// 시간복잡도가 O(n^2)일 경우에 처리해야할 연산이 많아지면 기하급수적으로 비효율적이게 되기 때문에 조심해야한다.



//self 구현
//#include <iostream>
//
//int main(){
//
//    int i, j , temp, index=0, min;
//    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
//
//    for(int i = 0 ; i < 10 ; i ++){
//        //min 값은 배열의 어느 값보다도 큰 값으로 설정해야함.
//        //min이 첫번째 for문에 들어가야지 계산한 값 빼고 나머지에서 가장 작은 값 구함
//        min = 99;
//        for(int j = i ; j < 10 ; j++){
//            if(min > array[j]){
//                min = array[j];
//                //                temp = array[j];
//                index = j;
//            }
//        }
//        //swapping
//        temp = array[i];
//        array[i] = array[index];
//        array[index] = temp;
//    }
//
//
//    for(int i = 0 ; i < 10 ; i ++){
//        printf("%d ", array[i]);
//    }
//
//
//    return 0;
//}
