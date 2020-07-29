//
//  main.cpp
//  b_2870
//
//  Created by 이동연 on 27/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool is_digit(string str) {
    return atoi(str.c_str()) != 0 || str.compare("0") == 0;
}

int main(void) {
//    int n;
//    cin>>n;
//    for(int i =0; i <n; i++){
//
//    }
    string st = "43silos0";
    string st1 = "zita002";
    string st2 = "le2sim";
    cout <<(atoi(st.c_str()))<<endl;
    cout <<(atoi(st1.c_str()))<<endl;
    cout <<(atoi(st.c_str()))<<endl;
    cout << is_digit(st) << endl;
    cout << is_digit(st1) << endl;
    cout << is_digit(st2) << endl;
}
//숫자만 어떻게 뽑아요
