//
//  main.cpp
//  b_2082
//
//  Created by 이동연 on 2021/01/26.
//

#include <iostream>
#include <vector>

using namespace std;

char digit[10][17]={
    "####.##.##.####",
    "..#..#..#..#..#",
    "###..#####..###",
    "###..####..####",
    "#.##.####..#..#",
    "####..###..####",
    "####..####.####",
    "###..#..#..#..#",
    "####.#####.####",
    "####.####..####"
};

vector<int> cand[4];
char input[5][17];

bool match(int x, int k){
    for(int i=0; i<5; ++i){
        for(int j=0; j<3; ++j){
            if(input[i][x+j] == '#' && digit[k][i*3+j] == '.') return false;
        }
    }
    return true;
}

int main(){
    for(int i=0; i<5; ++i) gets(input[i]);
    int timer[4]={2, 9, 5, 9};
    for(int x=0; x<4; ++x){
        for(int k=0; k<=timer[x]; ++k){
            if(match(4*x, k)){
                printf("%d", k);
                break;
            }
        }
        if(x==1) putchar(':');
    }
    
    return 0;
}
