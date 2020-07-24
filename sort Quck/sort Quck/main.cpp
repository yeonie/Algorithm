//
//  main.cpp
//  sort Quck
//
//  Created by 이동연 on 24/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//
// 시간복잡도 O(n*logn)
// 정렬이 되있으면 O(n^2) - > 이때는 삽입정렬이 제일 빠룸.


#include <iostream>
using namespace std;
int data[10] = {1, 10, 5, 8 ,7, 6 ,4, 3 ,2, 9};
int number = 10;

void quickSort(int* data, int start, int end){
    //원소가 1개인 경우
    if(start >= end){
        return;
    }
    //key 라고도 불리우는 pivot값은 첫번째 원소
    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;

    while(i <= j){
        //key 값보다 큰 값을 만날 때 까지 오른쪽으로 조금씩 이동해준다.
        while(data[i] <= data[pivot]){
            i++;
        }

        //pivot 값보다 작은 애 만날때 까지 왼쪽으로 하나식 이동.
        while((data[j] >= data[pivot])&&j>start){
            j--;
        }

        // 엇갈린 상태면 키 값과 교체
        if(i > j){
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }
        else{
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }

    }

    quickSort(data, start, j-1);
    quickSort(data, j+1, end);

}
//분할 정복이라고도 함
int main(int argc, const char * argv[]) {
    // insert code here...

    quickSort(data, 0, number-1);

    for(int i = 0 ; i < 10 ; i ++){
        printf("%d ", data[i]);
    }

    return 0;
}


//#include <iostream>
//using namespace std;
//
//int data[10] = {1, 10, 5, 8 ,7, 6 ,4, 3 ,2, 9};
//int number = 10;
//
//void quickSort(int* data,int start,int end){
//    if(start >= end){
//        return;
//    }
//    int pivot = start;
//    int i = start + 1;
//    int j = end;
//    int temp;
//    while(i <= j ){
//        while(data[i]<=data[pivot]){
//            i++;
//        }
//
//        while(data[j]>= data[pivot] && j>start){
//            j--;
//        }
//
//        if(i > j){
//            temp = data[j];
//            data[j] = data[start];
//            data[start] = temp;
//        }
//        else{
//            temp = data[j];
//            data[j] = data[i];
//            data[i] = temp;
//        }
//    }
//    quickSort(data, start, j-1);
//    quickSort(data, j+1, end);
//
//}
//
//int main(void){
//    quickSort(data, 0, number-1);
//    for(int i = 0; i < number ; i ++){
//        printf("%d ", data[i]);
//    }
//}
//
//
//

//#include <iostream>
//using namespace std;
//
//int data[10] = {1, 10, 5, 8 ,7, 6 ,4, 3 ,2, 9};
//int dataSize = 10;
//
//void quickSort(int* data, int start, int end){
//    if(start>=end){
//        return;
//    }
//    int temp;
//    int pivot = start;
//    int i = start+1;
//    int j = end;
//
//    while(i<=j){
//        while(data[i]<=data[pivot]){
//            i++;
//        }
//        while(data[j]>=data[pivot]&&j>start){
//            j--;
//        }
//        if(i > j){
//            temp = data[j];
//            data[j] = data[start];
//            data[start] = temp;
//        }
//        else{
//            temp = data[j];
//            data[j]= data[i];
//            data[i] =temp;
//        }
//    }
//    quickSort(data, start, j-1);
//    quickSort(data, j+1, end);
//}
//
//int main(void){
//    quickSort(data, 0, dataSize-1);
//    for(int i = 0 ; i < dataSize ;i++){
//        printf("%d ", data[i]);
//    }
//}

//#include <iostream>
//using namespace std;
//int data[10] = {1, 10, 5, 8 ,7, 6 ,4, 3 ,2, 9};
//int dataSize = sizeof(data)/sizeof(int);
//
//void quickSort(int* data, int start, int end){
//    int i = start+1;
//    int j = end;
//    int temp;
//    int pivot = start;
//    if( start >= end){
//        return;
//    }
//    while(i <= j){
//        while(data[i] <= data[pivot]){
//            i++;
//        }
//        while(data[j] >= data[pivot] && start<j){
//            j--;
//        }
//        if(i>j){
//            temp = data[j];
//            data[j] = data[start];
//            data[start] = temp;
//        }
//        else{
//            temp = data[i];
//            data[j]= data[i];
//            data[i] = temp;
//        }
//    }
//    quickSort(data, start, j-1);
//    quickSort(data, j+1, end);
//}
//
//int main(void){
//
//    quickSort(data , 0, dataSize-1);
//
//    for(int i = 0 ; i < dataSize;i++){
//        printf("%d ", data[i]);
//    }
//
//
//}
