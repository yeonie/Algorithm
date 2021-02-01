//
//  main.cpp
//  b_11478
//
//  Created by 이동연 on 2021/02/01.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;


int main(){
    string s;
    set<string>strSet;
    cin>>s;
    for(int i = 0 ; i < s.length() ; i++){
        for(int j = 1 ; j <= s.length()-i ; j++){
            strSet.insert(s.substr(i,j));
        }
    }
    cout<<strSet.size();
}
