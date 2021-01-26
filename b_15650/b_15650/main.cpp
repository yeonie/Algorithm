//
//  main.cpp
//  b_15650
//
//  Created by 이동연 on 2021/01/25.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
bool visited[10];
int values[10];

void recursive(int temp, int b)
{
    if (temp == 0)
    {
        for (int i = M; i >= 1; --i)
        {
            cout << values[i] << " ";
        }
        cout << '\n';
    }
    else
    {
        for (int i = 1; i <= N; ++i)
        {
            if (visited[i])
                continue;
            //이전 값이 더 크다면 패쓰!!
            else if (i < b)
                continue;
            else
            {
                visited[i] = true;
                values[temp] = i;
                recursive(temp - 1, i);
                values[temp] = 0;
                visited[i] = false;
            }
        }
    }
    return;
}

int main(){
    cin >> N >> M;
     
    recursive(M, 0);
     
    return 0;
}
