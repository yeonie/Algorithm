//
//  main.cpp
//  b_2748
//
//  Created by 이동연 on 2021/01/18.
//

#include <iostream>
#include <vector>

using namespace std;

vector<long long> pivo;

void pivonacci(int n){
    
    long long temp=0;
    pivo.push_back(0);
    pivo.push_back(1);
    for(int i = 0; i < n ; i++){
        temp = pivo[i]+ pivo[i+1];
        pivo.push_back(temp);
    }
    cout<<pivo[n];
}

int main(){
    int n;
    
    cin>> n;
    
    pivonacci(n);
}
