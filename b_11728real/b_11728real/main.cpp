//
//  main.cpp
//  b_11728real
//
//  Created by 이동연 on 2021/01/29.
//

#include <iostream>
#include <vector>

using namespace std;

int arr1[1000005]{0,};
int arr2[1000005]{0,};

int main(){
    
    int n, m, index ;
    vector<int>v;
    
    cin>>n>>m;
    
    int first = 0 , second = 0;
    
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i = 0 ; i < m ; i++){
        scanf("%d", &arr2[i]);
    }
    
    while(first < n || second < m){
        if(arr1[first]<arr2[second]){
            v.push_back(arr1[first]);
            first++;
        }
        else{
            v.push_back(arr2[second]);
            second++;
        }
        if(first >= n){
                for(int i = second ; i < m ; i++){
                    v.push_back(arr2[i]);
                }
            }
        if(second >= m){
                for(int i = first ; i < n ; i++){
                    v.push_back(arr1[i]);
                }
            }
    }
    
    
    for(int i = 0 ; i < m+n ; i++){
        cout<<v[i]<<" ";
    }
    
    
}
