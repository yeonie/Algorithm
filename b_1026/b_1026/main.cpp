//
//  main.cpp
//  b_1026
//
//  Created by 이동연 on 27/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(void){
    vector <int> v1, v2;
    
    int sum=0;
    int input;
    int n;
    cin>> n;
    
    for(int i = 0; i <n ; i++){
        cin>> input;
        v1.push_back(input);
    }
    for(int i = 0; i <n ; i++){
        cin>> input;
        v2.push_back(input);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), compare);
    
//    for(int i = 0 ; i < n ; i++){
//        cout<< v1[i] << ' ';
//    }
//    printf("\n");
//    for(int i = 0 ; i < n ; i++){
//        cout<< v2[i] << ' ';
//    }
    for(int i = 0; i < n ; i ++){
        sum = sum +v1[i]*v2[i];
    }
    cout<< sum;
    
}
