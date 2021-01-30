//
//  main.cpp
//  b_15829
//
//  Created by 이동연 on 2021/01/30.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    
    string str;
    
    int n;
    unsigned long long sum = 0;

    cin>>n;
    
    cin>>str;

    for(int i = 0 ; i < n ; i++){
        str[i] = str[i]-96;
        sum+=str[i]*pow(31,i);
    }
    cout<<sum;

}
