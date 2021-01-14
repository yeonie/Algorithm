//
//  main.cpp
//  b_1969
//
//  Created by 이동연 on 2021/01/14.
//

#include <iostream>
#define N 1000
#define M 50
using namespace std;

int n;
int m;

char DNAset[N][M];
int chai[N];
char legend[8];

int main() {
    
    cin>> n >> m;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>> DNAset[i][j];
        }
    }
    
    for(int k = 0 ; k < 8 ; k++){
        int count = 0;
        int minimum = chai[0];
        count = 0;
        for(int j = 0 ; j < 8 ;j++){
            for(int i = 0 ; i < 8 ; i++){
                if(DNAset[k][j]!= DNAset[i][j]){
                    count++;
                }
            }
            chai[k]= count;
            if(minimum>chai[k]){
                minimum=chai[k];
            }
            legend[k] = DNAset[k][minimum];
        }
        
    }
        for(int i = 0 ; i < 8 ; i++){
            cout<<legend[i];
        }
    cout<<endl;
    
}
