//
//  main.cpp
//  b_16968
//
//  Created by 이동연 on 2021/01/15.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string str;

int main() {
    cin >> str;

    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
        if (i == 0) {
            if (str[i] == 'd') {
                temp += 10;
            }
            else {
                temp += 26;
            }
            continue;
        }

        if (str[i] == str[i - 1]) {
            if (str[i] == 'd') {
                temp *= 9;
            }
            else {
                temp *= 25;
            }
        }
        else {
            if (str[i] == 'd') {
                temp *= 10;
            }
            else {
                temp *= 26;
            }
        }
    }
    cout << temp << endl;
    
}
