//  main.cpp
//  undirectedGraph
//
//  Created by 이동연 on 24/11/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void sfb(vector<int> *w, bool *checker, int v)
{
    queue<int> que;
    checker[v] = true;
    que.push(v);
    
    while (!que.empty())
    {
        int now = que.front();
        que.pop();
        
        for (int i = 0; i < w[now].size(); i++)
        {
            int next = w[now][i];
            if (!checker[next])
            {
                que.push(next);
                checker[next] = true;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    
    
    //    노드
    int n;
    //    에지
    int m;
//    연결요소 갯수
    int answer = 0;
    
    cin >>n;
    cin >>m;
    
    vector<int>w[n+1];
    
    
    for(int i = 0 ; i < m ; i++){
        int u, v;
        cin>>u;
        cin>>v;
        w[u].push_back(v);
        w[v].push_back(u);
    }
    
    bool flag[] = {false};
    for(int i = 0 ; i <= n+1; i++){
        flag[i] = {false};
    }
    
   
    
    for (int i = 1; i <= n; i++)
    {
        if (flag[i])
            continue;
        
        sfb(w, flag, i);
        answer++;
    }
    
    cout<<answer<<endl;
    
//    for(int i = 1 ; i < n+1 ; i++){
//        cout<<i<<" ";
//        for(int j = 0 ; j<w[i].size(); j++){
//            cout<<w[i][j]<< " ";
//        }
//        cout<<endl;
//    }
    //    cout<<w[1][0]<<endl;
    //    cout<<w[1][1]<<endl;
    //    cout<<w[1][2]<<endl;
    //    cout<<w[1].size()<<endl;
    
}
