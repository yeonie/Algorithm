#include <iostream>

using namespace std;


int main(void){
    
    int n;
    long long int d[91];
    
    d[0] = 0;
    d[1] = 1;
    
    cin>> n;
    
    for(int i = 2 ; i <=n ; i++){
        d[i]= d[i-1] + d[i-2];
    }
    
    cout<< d[n];
}
