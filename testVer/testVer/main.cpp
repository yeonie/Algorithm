//
//  main.cpp
//  testVer
//
//  Created by 이동연 on 2021/01/29.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    scanf("%d %d", &n,&m);
    vector<int>v;
    
    for(int i = 0 ; i < m+n ; i++){
        int temp;
        scanf("%d", &temp);
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0 ; i < m+n ; i++){
        printf("%d", v[i]);
        printf(" ");
    }
}
