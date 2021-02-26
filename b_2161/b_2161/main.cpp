//
//  main.cpp
//  b_2161
//
//  Created by 이동연 on 2021/02/16.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    int n;
    cin>> n;
    
    for(int i = 1 ; i <= n ; i++){
        q.push(i);
    }
    while(q.size()!=1){
        cout<<q.front()<<" ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout<<q.front();
    
    return 0;
}

