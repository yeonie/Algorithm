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
    int totalTime = 210;
    for(int i = 1 ; i <= N ; i++){
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
                q.push(q.front());
                q.pop();
                if(totalTime<=0){
                    cout<<i;
                    break;
                }
            }
            else if(reaction =='N' || reaction=='P'){
                totalTime-=temp;
                if(totalTime<=0){
                    cout<<i;
                    break;
                }
                //재귀해서 트루부분에
                //함수 분리
            }
        }
    }
    
}
