//
//  main.cpp
//  b_14606
//
//  Created by 이동연 on 2021/01/21.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    
    cin>> n;
    
    int satisfaction[n];
    
    satisfaction[0] = 0;
    satisfaction[1] = 0;
    satisfaction[2] = 1;
    satisfaction[3] = 3;
    satisfaction[4] = 6;
    satisfaction[5] = 10;
    
    for(int i = 0 ; i <= n ; i++){
        satisfaction[i] = i*(i-1)/2;
    }
    
    cout<< satisfaction[n];
    
}
