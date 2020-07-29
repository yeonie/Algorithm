//
//  main.cpp
//  b_2012
//
//  Created by 이동연 on 27/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(void) {
    
    vector <int> expected, real;
    
    long long n;
    long long dif=0;
    long long sum=0;
    cin>> n;
    for(int i =0 ; i < n ; i++){
        int input;
        cin>> input;
        expected.push_back(input);
    }
    sort(expected.begin(),expected.end());
    
    for(int i = 1; i <= n ; i++){
        real.push_back(i);
    }
    
    
    for(int i = 0 ; i < n ; i++){
        dif = 0;
        dif = expected[i]-real[i];
        if (dif <0){
            dif = dif*(-1);
        }
        sum = sum +dif;
    }
    
    cout<< sum;
    
}
