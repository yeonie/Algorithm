//
//  main.cpp
//  b_11866
//
//  Created by 이동연 on 2021/02/16.
//

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, k;
    queue<int>q;
    
    cin>> n >> k;
    
    for(int i = 1 ; i <= n ; i++){
        q.push(i);
    }
    
    for(int i = 0 ; i < k-1 ; i++){
        q.push(q.front());
        q.pop();
    }
    
    cout<<"<";
    while(q.size()!=0){
        cout<<q.front();
        q.pop();
        if(!q.empty()){
            cout<<",";
        }
        for(int i = 0 ; i < k-1 ; i++){
            q.push(q.front());
            q.pop();
        }
    }
    cout<<">";
}
