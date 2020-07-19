//
//  main.cpp
//  sort Insertion
//
//  Created by 이동연 on 19/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    //삽입정렬은 숫자를 적절한 위치에 삽입하기

    int i, j , temp;

    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for(int i = 0 ; i < 9 ; i ++){
        j = i;
        while(array[j] > array[j+1]){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
    }

    for(int i = 0 ; i < 10; i ++){
        printf("%d ", array[i]);
    }

    return 0;
}

// 이게 머 효율적이긴 한듯. 근데 최악의 경우 버블이랑 다를바가 없음(내림차순이었을 경우. 반대로 정렬 되어 있는 경우에는 쌉효율적.-> 할 일 없음)
// 대신에 얘는 for문 돌 때, 지금 index랑 그 전의 index비교해서 그전의 index가 더 작으면 관둠
// 왜냐하면 그 전의 배열은 정렬이 되어있다고 생각하기 때문에.


//#include <iostream>
//
//int main(){
//    int i ,j, temp;
//
//    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
//
//    for(int i = 0 ; i < 10 ; i++ ){
//        j = i;
//        while(array[j]>array[j+1]){
//            //swapping
//            temp = array[j];
//            array[j] = array[j+1];
//            array[j+1] = temp;
//            //while 문을 통해그앞에 정렬된거까지 비교해줘야하니까
//            j--;
//        }
//    }
//
//    for(int i = 0 ; i < 10; i ++){
//        printf("%d ", array[i]);
//    }
//
//
//}
