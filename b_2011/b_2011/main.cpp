//
//  main.cpp
//  b_2011
//
//  Created by 이동연 on 2021/01/22.
//

#include <iostream>
#include <string>
using namespace std;


int crypto[5000]={0,};
int DP[5000]={0,};

int main(){
    
    string input;
    cin>>input;
    
    for(int i = 1 ; i <= input.length() ; i++){
        crypto[i]=input[i-1]-'0';
//        DP[i]=input[i-1]-'0';
    }
    
        
    if (input.length() == 1 && input[0] == '0')
        {
            cout << 0 << endl;
            exit(0);
        }
    
    DP[0] = 1;
        for (int i = 1; i <= input.length() ; i++)
        {
            if (crypto[i] >= 1 && crypto[i] <= 9)
            {
                DP[i] = (DP[i - 1] + DP[i]) % 1000000;
            }
     
            if (i == 1) continue;
     
            int Temp = crypto[i] + crypto[i - 1] * 10;
            if (Temp >= 10 && Temp <= 26)
            {
                DP[i] = (DP[i - 2] + DP[i]) % 1000000;
            }
        }
    
    cout<<DP[input.length()];
    
}
