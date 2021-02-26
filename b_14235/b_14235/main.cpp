//
//  main.cpp
//  b_14235
//
//  Created by 이동연 on 2021/02/19.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    vector<long long>v;
    cin>> n;
    
    for(int i = 0 ; i < n ; i++){
        long long temp;
        cin>>temp;
        if(temp == 0){
            if(v.empty()){
                cout<<-1<<endl;
            }
            else{
                cout<<v.back()<<endl;
                v.pop_back();
            }
        }
        else{
            for(int j = 0 ; j < temp ; j++){
                long long present = 0;
                cin>>present;
                v.push_back(present);
            }
    
        }
    }
}
