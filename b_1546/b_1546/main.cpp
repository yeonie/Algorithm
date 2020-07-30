//
//  main.cpp
//  b_1546
//
//  Created by 이동연 on 29/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
double sum=0;

int main(void){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        int score;
        cin>> score;
        v.push_back(score);
    }
    sort(v.begin(),v.end());
    
//    for(int i = 0 ; i < n ; i++){
//        cout<<v[i];
//    }
    

    double result;
    for(int i = 0; i < n ; i ++){
        sum = sum + ((double)v[i]/(double)v[n-1])*100;
    }
    sum = sum / n;
    
    
    cout<<sum<<endl;
}
