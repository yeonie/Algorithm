#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];


void BFS(int start){
    queue<int> q;
    //start 노드 큐에 처박기
    q.push(start);
    //check배열에 스타트한거 true 체크
    c[start] = true;
    //que가 비지 않았다면
    while(!q.empty()){
        int x = q.front();
        q.pop();
        printf("%d ", x);
        //인접한 애들한테 주기
        for(int i = 0 ; i < a[x].size();i++){
            int y = a[x][i];
            if(!c[y]){
                q.push(y);
                c[y]= true;
            }
        }
    }
}

int main(void){
    //각자의 노드 연결
    a[1].push_back(2);
    a[2].push_back(1);
    
    a[1].push_back(3);
    a[3].push_back(1);
    
    a[2].push_back(4);
    a[4].push_back(2);
    
    a[3].push_back(6);
    a[6].push_back(3);
    
    a[2].push_back(5);
    a[5].push_back(2);
    
    a[6].push_back(7);
    a[7].push_back(6);
    
    //BFS함수 실행
    BFS(1);
    
}
