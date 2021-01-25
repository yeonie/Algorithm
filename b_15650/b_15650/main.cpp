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

int n, m;
int result[10];
int check[10];

void getResult(int x, int start) {
 
    // 1 ~ n까지의 수 중 중복 없이 m개를 고른 수열을 출력
    if (x == m) {
        for (int i = 0; i < m; i++)
            printf("%d ", result[i]);
        printf("\n");
        return;
    }
    for (int i = start; i <= n; i++) {
        if (!check[i]) {      // 아직 고르지 않았다면
            check[i] = true;  // 고릅니다
            result[x] = i;    // 배열에 넣습니다
 
            // 다음 수를 고르러 갑니다
            // 단, 현재 수보다 큰 수만 고를 수 있게
            // for문을 시작하는 수로 i + 1을 인자로 넘겨줍니다
            getResult(x + 1, i + 1);
            check[i] = false;  // 모든 경우 탐색을 위함
        }
    }
}

int main(){
    
    cin >> n >> m;
    
    getResult(0, 1);
}
