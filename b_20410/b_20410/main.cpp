//
//  main.cpp
//  b_20410
//
//  Created by 이동연 on 2021/01/14.
//

#include <iostream>

using namespace std;

int main() {
    int m, seed, x1, x2;
    int a = 0, c = 0;
    
    cin>> m>> seed>> x1 >>x2;
    
    for(int i = 0 ; i < m ; i++){
        if((a * seed + c) % m == x1){
            break;
        }
        a++;
    }
    for(int i = 0 ; i < m ; i++){
        if((a * x1 + c)%m == x2){
            break;
        }
        c++;
    }
    c+=a;
    a--;
    c--;
    
    cout<<a<<" "<<c;
    
}
