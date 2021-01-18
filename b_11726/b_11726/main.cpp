//
//  main.cpp
//  b_11726
//
//  Created by 이동연 on 2021/01/18.
//

#include <iostream>
#include <vector>

using namespace std;

vector<long long> pivo;

void pivonacci(long long n){
    
    long long temp=0;
    pivo.push_back(0);
    pivo.push_back(2);
    pivo.push_back(3);
    for(int i = 1; i <= n ; i++){
        temp = pivo[i]%10+ pivo[i+1]%10;
        temp = temp%10;
        pivo.push_back(temp);
    }
    cout<<pivo[n-1]%10;
}

int main(){
    long long n;
    
    cin>> n;
    
    pivonacci(n);
}
