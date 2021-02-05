//
//  main.cpp
//  b_17266
//
//  Created by 이동연 on 2021/02/03.
//

#include <iostream>
#include <vector>

using namespace std;
int n, m;
int mid;
int v[100001]={0,};

bool calc(int mid){
    double cur = 0;
    
    for (int i = 0; i < m; i++){
        if(v[i]- mid <= cur){
            cur = v[i]+mid;
        }
        else return false;
    }
        //조건 충족 여부
    if (cur < n){
        return false;
    }
    return true;
}

int main(){
    cin>> n>>m;
    
    for(int i = 0 ; i < m ; i++){
        cin>>v[i];
    }
    
    int left = 0, right = n, ans = 0;
    
    while(left <= right){
        mid = (left+right)/2;
        if(calc(mid)){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    cout<<ceil(mid);
    
}
