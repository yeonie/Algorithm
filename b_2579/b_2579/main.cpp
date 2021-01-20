//
//  main.cpp
//  b_2579
//
//  Created by 이동연 on 2021/01/20.
//

#include <iostream>
#include <vector>

using namespace std;


int main(){
    
    vector<int>stair;
    vector<int>score;
    int n;
    cin>> n;
    
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>> temp;
        stair.push_back(temp);
    }
    score.push_back(stair[0]);
    score.push_back(max(stair[0]+stair[1], stair[1]));
    score.push_back(max(stair[0]+stair[2], stair[1]+stair[2]));
    
    for(int i=3; i<=n-1 ; i++){
        int temp;
        temp = max(score[i-2]+stair[i], stair[i-1]+stair[i]+score[i-3]);
        score.push_back(temp);
    }
    
    cout<< score[n-1]<<endl;
    return 0;
}
