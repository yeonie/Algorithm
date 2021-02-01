//
//  main.cpp
//  b_1920
//
//  Created by 이동연 on 2021/02/01.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
    vector<long long>nv;
    long long n;
    cin>> n;
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>> temp;
        nv.push_back(temp);
    }
    vector<long long>mv;
    long long m;
    cin>> m;
    for(int i = 0 ; i < m ; i++){
        int temp;
        cin>> temp;
        mv.push_back(temp);
    }
    for(int i = 0 ; i < m ; i++){
        bool flag = false;
        for(int j = 0 ; j < n ; j++){
            if(mv[i]==nv[j]){
                flag=true;
            }
            if(j==n-1){
                if(flag==true){
                    cout<<1<<endl;
                }
                else{
                    cout<<0<<endl;
                }
            }
        }
    }
}
