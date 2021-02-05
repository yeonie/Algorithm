//
//  main.cpp
//  b_10773
//
//  Created by 이동연 on 2021/02/05.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<int>v;
    cin>> n;
    int count = 0;
    int sum = 0;
    for(int i = 0 ; i< n ; i++){
        int temp;
        cin>>temp;
        if(temp != 0){
            v.push_back(temp);
            count++;
        }
        else{
            if(count>0){
                v.pop_back();
            }
        }
    }
    for(int i = 0 ; i < v.size() ;i++){
        sum+= v[i];
    }
    
    cout<<sum<<endl;
}
