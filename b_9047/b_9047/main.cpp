//
//  main.cpp
//  b_9047
//
//  Created by 이동연 on 2021/01/24.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

char testCase[4] = {0,};

int main(){
    string temp;
    int n,a,b;
    cin>>n;
    
    for(int i = 0 ; i < n ; i++){
        int count=0;
        cin>>temp;
        while(true){
            if(temp == "6174"){
                break;
            }
            else{
                sort(temp.begin(), temp.end(), greater<char>());
                a = stoi(temp);
                sort(temp.begin(), temp.end(), less<char>());
                b = stoi(temp);
                temp = to_string(a - b);
            }
            if (temp.size() != 4) {
                if (temp.size() == 1) {
                    temp = temp + "000";
                }
                if (temp.size() == 2) {
                    temp = temp + "00";
                }
                if (temp.size() == 3) {
                temp = temp + '0';
                }
            }
            count++;
        }
        cout<< count<<endl;
    }
    
}
