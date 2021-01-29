//
//  main.cpp
//  b_3273
//
//  Created by 이동연 on 2021/01/29.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &v[i]);
    }
    sort(v,v+n);
    
    int m;
    scanf("%d", &m);
    
    int result = 0;
    
    for(int i = 0 ; i < n ; i++){
        int low = 0, high = n - 1;

                         while (low <= high)

                         {

                                 int mid = (low + high) / 2;

                                 if (v[mid] == m - v[i])

                                 {

                                         result++;

                                         break;

                                 }

                                 else if (v[mid] < m - v[i])

                                         low = mid + 1;

                                 else

                                         high = mid - 1;

                         }



    }
    
    printf("%d", result/2);
    
}
