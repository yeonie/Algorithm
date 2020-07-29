//
//  main.cpp
//  b_2751
//
//  Created by 이동연 on 27/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    vector<long> v;
    long long n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int input;
        cin>> input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    
    for(int i = 0 ; i < n ; i++){
        cout<< v[i] <<"\n";
    }
}
