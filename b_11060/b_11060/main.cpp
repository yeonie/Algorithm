//
//  main.cpp
//  b_11060
//
//  Created by 이동연 on 2021/01/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> doldari;
    int n;
    
    cin>> n;
    
    for(int i = 1 ; i <= n ; i++){
        int temp;
        cin>> temp;
        doldari.push_back(temp);
    }
    doldari[1]=1;
    
    for(int i = 1 ; i <= n ; i++){
        if(doldari[i-1]==0){
            continue;
        }
        for(int j=1; (j<=doldari[i-1]) && (i-1+j<=1000) ; j++){
                    if(doldari[i-1+j] > doldari[i-1]+1 || doldari[i-1+j]==0)
                        doldari[i-1+j] = doldari[i-1]+1;
                }
    }
    
    if(doldari[n-1]==0){
        cout<<-1;
    }
    else{
        cout<<doldari[n-1]-1;
    }
    
    
}
