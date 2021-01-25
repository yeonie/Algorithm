//
//  main.cpp
//  b_2846
//
//  Created by 이동연 on 2021/01/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int n;
    int maxi = 0;
    int sum=0;
    cin>>n;
    vector<int>v;
    int summ[1001] = {0,};
    
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>> temp;
        v.push_back(temp);
    }
    
    for(int i = 0 ; i < n ; i++){
        if(v[i]<v[i+1]){
            sum += v[i+1]-v[i];
            summ[i] += sum;
//            cout<<summ[i]<<endl;
        }
        else{
            sum=0;
        }
    }
    for(int i = 1 ; i <= n ; i++){
//        cout<<summ[i-1]<<endl;
        if(maxi<summ[i-1]){
            maxi=summ[i-1];
        }
    }
    
    cout<< maxi;
}
