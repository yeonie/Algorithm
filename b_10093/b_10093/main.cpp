//
//  main.cpp
//  b_10093
//
//  Created by 이동연 on 2021/01/26.
//

#include <iostream>

using namespace std;

int main(){
    unsigned long long a=0, b=0;
    
    cin>> a>>b;
    
    if(a>b){
        swap(a,b);
    }
    if(a!=b){
        cout<< (b-a-1)<<endl;
        
        for(unsigned long long i = a+1 ; i < b ; i++){
            cout<<i<<" ";
        }
    }
    else{
        cout<<0;
    }
    
    
}
