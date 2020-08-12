//
//  main.cpp
//  b_15702
//
//  Created by 이동연 on 07/08/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    vector<int>prob;
    vector<int, pair<string, int>> na;
    //n 문제 수
    //m 응시생 수

    int n, m;
    cin>> n >> m;
    // 문제 배점
    for(int i =0; i< n;i++){
        int temp;
        cin>> temp;
        prob.push_back(temp);
    }
    for(int i = 0 ; i < m ; i++){
        int sum=0;
        int personNumb;
        cin>> personNumb;
        na.first.push_back(personNumb);
        for(int j = 0 ; i < n ; i++){
            char ox;
            cin>> ox;
            na.second.second.push_back(j);
            if(ox == 'o'){
                sum += prob[j];
            }
        }
        na.second.first.push_back(sum);
    }
    
    sort(na.second.first.begin(),na.second.first.end());
    
    cout<<na.first<< ' '<< na.second.first(m-1);
    
}

// 조유빈거보고 어디가 틀린지 확인하기
