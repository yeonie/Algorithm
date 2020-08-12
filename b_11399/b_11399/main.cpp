//
//  main.cpp
//  b_11399
//
//  Created by 이동연 on 05/08/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    vector<int> v;
    
    int n;
    cin>> n;
    for( int i = 0 ; i < n ; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    
    
    int sum = 0;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            sum = v[i] + sum;
            
            cout<< sum<<endl;
        }
    }
    cout << sum;
    
    
    //put/ sort
    //1 2 3 3 4
    
    //1 // 1+2 = 3 // 3+3 = 6 // 6+3 = 9 // 9+ 4 = 13
    //1+ 3 + 6 + 9 + 13 = 32
    
    
    //Q. 이거 왜 첫번째 sum 이 바로 2가 되는지 모르겠음.
    
    
}
