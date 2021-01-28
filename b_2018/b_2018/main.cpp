//
//  main.cpp
//  b_2018
//
//  Created by 이동연 on 2021/01/27.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    int count=0;
    int start=1;
    
    cin>> n;
    
    while(true){
        long long temp = 1LL * (start*(start + 1) / 2);
        if(temp > n)
            break;

        if((n - temp) % start == 0)
            count++;

        start++;
    }
    cout<< count;
}

 



// 17. 89.
