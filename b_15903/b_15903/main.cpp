//
//  main.cpp
//  b_15903
//
//  Created by 이동연 on 2021/02/19.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<long long>v;
    long long n;
    long long summer;
    
    cin>> n >> summer;
    
    for(int i = 0 ; i < n ; i++){
        long long temp;
        cin>> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    
    for(int i = 0 ; i < summer ; i++){
        long long temp = v[0]+v[1];
        v[0] = temp;
        v[1] = temp;
        sort(v.begin(), v.end());
    }
    
    long long sum = 0;
    
    for(int i = 0 ; i < n ; i++){
        sum+= v[i];
    }
    
    cout<< sum;
}
