//
//  main.cpp
//  b_2529
//
//  Created by 이동연 on 2021/01/13.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 11

using namespace std;

int N;
char line[MAX];
vector<int>v1,v2;

bool checker(vector<int> &temp){
    for (int i = 0; i < N; i++) {
            if (line[i] == '<' && temp[i] > temp[i + 1])
                return false;
            if (line[i] == '>' && temp[i] < temp[i + 1])
                return false;
        }
        return true;
}

int main(){
    cin>>N;
    for(int i = 0 ; i < N ; i++){
        cin>>line[i];
    }
    
    for(int i = 0 ; i <= N ; i++){
        v1.push_back(i);
        v2.push_back(9-i);
    }
    
    do{
        if(checker(v1)) break;
    }while(next_permutation(v1.begin(), v1.end()));
    
    do{
        if(checker(v2)) break;
    }while(prev_permutation(v2.begin(), v2.end()));
    
    for(int i = 0 ; i <= N ; i++){
        cout<< v2[i];
    }
    printf("\n");
    for(int i = 0 ; i <= N ; i++){
        cout<< v1[i];
    }
}

