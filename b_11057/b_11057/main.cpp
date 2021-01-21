//
//  main.cpp
//  b_11057
//
//  Created by 이동연 on 2021/01/21.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    int ans=0;
    
    cin>>n;
    
    int DP[1001][10] = {};
    
    
    for (int i = 0; i < 10; i++) {
            DP[1][i] = 1;
        }

        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < 10; j++) {
                for (int k = j; k < 10; k++) {
                    DP[i][j] = (DP[i][j] + DP[i-1][k]) % 10007;
                }
            }
        }

        for (int i = 0; i < 10; i++) {
            ans = (ans + DP[n][i]) % 10007;
        }

        printf("%d\n", ans);
}
