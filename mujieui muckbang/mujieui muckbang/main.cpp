//
//  main.cpp
//  mujieui muckbang
//
//  Created by 이동연 on 12/08/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>

using namespace std;

int main(void) {
    int food_times[]= {8,6,4};
    int k = 15;
    
    int sum = 6;
    bool flag = false;
    
//    for(int i = 0; i < 3;i++){
//        sum += food_times[i];
//    }
    // cout<< sum;
    
    while(flag==false){
        for(int i = 0 ; i < 3; i++){
            if(food_times[i]==0){
                i = i;
            }
            else{
                if(k==0){
                    cout<< (i+1);
                    flag = true;
                    break;
                }
                food_times[i] -= 1;
                cout<< food_times[i]<< ' ';
                k--;
                sum--;
            }
        }
            cout<<endl;
    }
    }
}
