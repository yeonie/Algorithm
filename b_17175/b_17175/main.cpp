//
//  main.cpp
//  b_17175
//
//  Created by 이동연 on 2021/01/22.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    int pivonacci[51];
    
    cin>> n;
    
    pivonacci[0]=1;
    pivonacci[1]=1;
    pivonacci[2]=3;
    pivonacci[3]=5;
    
    for(int i = 2 ; i <= n ; i++){
        pivonacci[i] = (pivonacci[i-2]+pivonacci[i-1]+1)%1000000007;
    }
    
    cout<< pivonacci[n];
    
}
