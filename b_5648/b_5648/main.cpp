//
//  main.cpp
//  b_5648
//
//  Created by 이동연 on 27/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int r=0;


int rever(int input){
    string s = to_string(input);
    reverse(s.begin(), s.end());
    r=atoi(s.c_str());
    return r;
}


int main(void) {
    vector<int>v;
    int input;
    int n;
    cin >> n;

    for ( int i = 0; i < n ; i++){
        cin>> input;
        rever(input);
        v.push_back(r);
    }
//    for(int i = 0 ; i < v[i].length ; i++){
//        for(int j = v[j].size() ; j>0 ; j--){
//            int temp = 0;
//            v[i]=temp;
//            v[i] = v[j];
//            v[j] = v[i];
//            if(i>=j){
//                break;
//            }
//        }
//    }
    

    sort(v.begin(), v.end());
    for( int i = 0 ; i < n ; i++){
        cout<< v[i] << "\n";
    }
}





