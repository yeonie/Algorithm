//
//  main.cpp
//  b_11279
//
//  Created by 이동연 on 2021/02/19.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    vector<long long>v;
    cin>> n;
    for(int i = 0 ; i < n ; i++){
        long long temp;
        cin>> temp;
        if(temp == 0){
            if(v.empty()){
                cout<<0<<endl;
            }
            else{
                cout<<v.back()<<endl;
                v.pop_back();
            }
        }
        else{
            v.push_back(temp);
        }
    }
}
