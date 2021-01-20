//
//  main.cpp
//  b_1149
//
//  Created by 이동연 on 2021/01/19.
//

#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int coloring[n][3];
    int sum[n][3];
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> coloring[i][j];
//            cin >> sum[i][j];
        }
    }
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            sum[i][j]=coloring[i][j];
        }
    }

    
    for(int i = 1 ; i < n ; i++){
        sum[i][0] = sum[i][0] + min(sum[i-1][1],sum[i-1][2]);
        sum[i][1] = sum[i][1] + min(sum[i-1][0],sum[i-1][2]);
        sum[i][2] = sum[i][2] + min(sum[i-1][0],sum[i-1][1]);
    }
    
    
    
    int ans=987654321;
    ans=min(sum[n-1][0],sum[n-1][1]);
    ans=min(ans,sum[n-1][2]);
    
    cout<< ans;
}
