//
//  main.cpp
//  b_1012(dfs)]
//
//  Created by 이동연 on 2021/02/26.
//

#include<iostream>
using namespace std;

#define MAX 51
int mp[MAX][MAX];
bool visit[MAX][MAX];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int T, M, N, K;
int cnt;
int column, row;


//세로, 가로
void dfs(int x, int y)
{
    //시작지점을 방문했다고 체크
    visit[x][y] = true;
    for (int k = 0; k < 4; k++)
    {
        //다음 좌표값을 정해주고
        int nx = x + dx[k];
        int ny = y + dy[k];
        //다음 방향이 범위 내에 있다면
        if (0 <= nx && nx < N && 0 <= ny && ny < M)
        {
            //그 방향이 배추가 있고, 방문하지 않았다면
            if (mp[nx][ny]&&!visit[nx][ny])
            {
                visit[nx][ny] = true;
                //탐색
                dfs(nx, ny);
            }
        }
    }
}
//초기화
void init()
{
    //지렁이초기화
    cnt = 0;
    //맵 초기화
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            mp[i][j] = 0;
}

int main()
{
    //테스트 케이스 입력
    cin >> T;

    //테스트 케이스 대로 입력을 받음
    while (T--)
    {
        //초기화
        init();
        cin >> M >> N >> K;
        //배추가 있는 좌표 입력
        for (int i = 0; i < K; i++)
        {
            //가로, 세로 입력순
            cin >> column >> row;
            if (0 <= column && column < M && 0 <= row && row < N)
            {
                mp[row][column] = 1;
            }
        }
        //세로의 길이
        for (int i = 0; i < N; i++)
        {
            //가로의 길이
            for (int j = 0; j < M; j++)
            {
                //배추가 심어져 있는 곳부터 dfs탐색시작
                if (mp[i][j] && !visit[i][j])
                {
                    dfs(i, j);
                    //지렁이 추가
                    cnt++;
                }

            }
        }
        //지렁이 출력
        cout << cnt;
    }
    return 0;
}
