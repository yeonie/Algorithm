#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;

//int main(void){
//
//    int n ;
//    int select;
//    int input;
//    vector<int>v;
//    scanf("%d", &n);
//    scanf("%d", &select);
//
//    for(int i = 0; i < n ; i++){
//        scanf("%d", &input);
//        v.push_back(input);
//    }
//
//    sort(v.begin(),v.end());
//
//    printf("%d", v[select-1]);
//
//}
int main(void){
    int n;
    int j;
    int select;
    int temp;
    
    cin>> n;
    cin>> select;
    
    int arr[n];
    
    for(int i = 0; i < n ; i ++){
        cin >> arr[i];
    }
    
    for(int i = 0 ; i < n-1 ; i++){
        j=i;
        while(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    
    printf("%d", arr[select-1]);
}
