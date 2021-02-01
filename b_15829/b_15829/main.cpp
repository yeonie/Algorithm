//
//  main.cpp
//  b_15829
//
//  Created by 이동연 on 2021/01/30.
//

#include <iostream>
#include <string>
#include <cmath>

unsigned long long MOD = 1234567891;

using namespace std;

int main(){
    
    string str;
    
    int n;
    unsigned long long sum = 0;

    cin>>n;
    
    cin>>str;

    for(int i = 0 ; i < n ; i++){
        long long temp = str[i] - 96;
//        cout<<temp<<endl;
        for(int j = 0 ; j < i ; j++){
            temp *= 31;
            temp %= MOD;
        }
        temp %= MOD;
        sum += temp;
        sum %= MOD;
    }
    cout<<sum;

}
