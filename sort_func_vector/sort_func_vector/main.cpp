//
//  main.cpp
//  sort_func_vector
//
//  Created by 이동연 on 24/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(pair<string, pair<int, int>>a, pair<string, pair<int, int>>b){
    return a.second.first > b.second.first;
    
    
}

int main(void){
    vector<pair<string, pair<int, int>>>v;
    v.push_back(pair<string, pair<int, int>>("이동연", make_pair(98, 19950926)));
    v.push_back(pair<string, pair<int, int>>("김재호", make_pair(69, 19950326)));
    v.push_back(pair<string, pair<int, int>>("김현수", make_pair(96, 19950926)));
    v.push_back(pair<string, pair<int, int>>("강동연", make_pair(93, 19950926)));
    v.push_back(pair<string, pair<int, int>>("나웅현", make_pair(88, 19951126)));
    v.push_back(pair<string, pair<int, int>>("김정환", make_pair(78, 19950918)));
    
    
    sort(v.begin(),v.end(), compare);
    for(int i =0; i < v.size() ; i++){
        cout<< v[i].first<<" : " << v[i].second.first << " : "<<v[i].second.second<<endl;
    }
    
}
