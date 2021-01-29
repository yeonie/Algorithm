//
//  main.cpp
//  b_11728
//
//  Created by 이동연 on 2021/01/29.
//

#include <iostream>
#include <algorithm>

using namespace std;
 
int main() {
    int a[1000001];
    int b[1000001];
 
    int n, m;
    cin>> n >> m;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++) {
        cin>>b[i];
    }
    int first = 0;
    int second = 0;
    while (first < n && second < m) {
        if (a[first] <= b[second]) {
            printf("%d ", a[first]);
            first += 1;
        }
        else {
            printf("%d ", b[second]);
            second += 1;
        }
    }
    while (first < second) {
        cout<<a[first]<<" ";
        first += 1;
    }
    while (second < m) {
        cout<<b[second]<<" ";
        second += 1;
    }
}


