//
//  main.cpp
//  b_9663
//
//  Created by 이동연 on 2021/01/13.
//

#include <iostream>
#define MAX 15
using namespace std;

int col[MAX];
int N, total = 0;

bool condition(int level){
    for(int i = 0; i < level; i++)
            if(col[i] == col[level] || abs(col[level] - col[i]) == level - i)
                return false;
        return true;
}


void nqueen(int x){
    if(x==N){
        total++;
    }
    else{
        for(int i = 0; i < N ; i++){
            col[x] = i;
            if(condition(x)){
                nqueen(x+1);
            }
        }
    }
}

int main(){
    cin>> N;
    nqueen(0);
    cout<< total;
}




