//
//  main.cpp
//  b_1874
//
//  Created by 이동연 on 2021/02/05.
//

#include <iostream>
#include <vector>
#include <stack>
#include <cstdio>

using namespace std;

int main(){
    stack<int>original;
    vector<char>v;
    int n;
    int j = 0;
    cin>> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    for(int i = 1 ; i <= n ; i++){
        original.push(i);
        v.push_back('+');
        while(!original.empty() && original.top() == arr[j]) {
                    original.pop();
                    v.push_back('-');
                    j++;
                }
    }
    
    if (!original.empty()) printf("NO\n");
    else {
            for (int i = 0; i < v.size(); i++) printf("%c\n", v[i]);
    }
}
