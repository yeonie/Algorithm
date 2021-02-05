//
//  main.cpp
//  b_1789
//
//  Created by 이동연 on 2021/02/02.
//

#include <iostream>
using namespace std;

int main(){
    unsigned long long s;
    cin>> s;
    
    long long n=1;
    
    while(true){
        if(n*(n+1)/2>s){
            cout<<n-1;
            break;
        }
        n++;
    }
}


