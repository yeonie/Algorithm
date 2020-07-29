//
//  main.cpp
//  b_11014
//
//  Created by 이동연 on 27/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int x, y;
char temp;

int main(void) {
    int n;
    
    cin >> n;
    
    //총 테스트 케이스의 갯수
    for(int i = 0 ; i < n ; i++){
        cin>> x;
        cin>> y;
        char array[x][y];
        char desk[x];
        for(int i = 0 ; i < x ; i++){
            for(int j = 0 ; j < y ; j++){
                array[i][j] = '0';
            }
        }
        
        for(int i = 0 ; i < x; i++){
            cin>> temp;
            for(int k = 0 ; k < y; k++){
                desk[k]= temp;
            }
            if(desk[i] == 'x'){
                array[i][i] = 1;
            }
        }
        //출력 test part
        for(int i = 0 ; i < x; i++){
            for(int j = 0 ; j < y ; j++){
                cout<< array[i][j] << ' ';
            }
            cout<<"\n";
        }
        
    }
    
}
//.을 주르륵 받아서 자리로 표현해주는 방법을 모르겠네요
