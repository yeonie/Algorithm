//
//  main.cpp
//  simulationEX
//
//  Created by 이동연 on 2021/01/25.
//

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int T, N, K;
    cin>>K;
    cin>>N;
    queue<int>q;
    
    
    int n, t, z;
    int time_ticking = 0;
    cin>> n;
    
    while(n--){
        cin>>t>>z;
        time_ticking += t;
        if(time_ticking >= 210)break;
        
        if(z == 'T'){
            q.push(q.front());
            q.pop();
            continue;
        }
        else{
            continue;
        }
    }
    cout<< q.front();
    int totalTime = 210;
    for(int i = 1 ; i <= 8 ; i++){
        q.push(i);
    }
    while(q.front() != K){
        q.push(q.front());
        q.pop();
    }
    
    while(true){
        for(int i = 1 ; i <= N ; i++){
            int temp=0;
            cin>>temp;
            char reaction;
            cin>>reaction;
            if(reaction == 'T'){
                totalTime-=temp;
                if(totalTime<=0){
                    cout<<q.front();
                    return 0;
                }
                q.push(q.front());
                q.pop();
            }
            else if(reaction =='N' || reaction=='P'){
                totalTime-=temp;
                if(totalTime<=0){
                    cout<<q.front();
                    return 0;
                    
                }
                
            }
        }
    }
    
}
    
    
