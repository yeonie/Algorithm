//
//  main.cpp
//  b_14916
//
//  Created by 이동연 on 2021/01/18.
//

#include <iostream>
using namespace std;

void calculator(int n){
    
    if((n%5)%2 ==0 ){
        cout << n / 5 + n % 5 / 2 << endl;
    }
    else if (n / 5 == 0) cout << "-1"<<endl;
    else cout << n / 5 + (n % 5 + 5) / 2 - 1 << endl;
        
}

int main(){
    int n;
    cin>> n;
    calculator(n);
}
