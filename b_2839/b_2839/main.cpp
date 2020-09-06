#include <iostream>
#include <stdio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
    int n;
    int cnt=0;
    int flag=0;
    
    cin >> n;
    
    while(n>0){
        
        if(n%5==0){
            cnt++;
            n-=5;
        }
        else if(n%3==0){
            cnt++;
            n-=3;
        }
        else if(n>5){
            cnt++;
            n-=5;
        }
        else{
            flag=-1;
            break;
        }
    }
    
    if(flag==0){
        cout<< cnt;
    }
    else{
        cout<< flag;
    }
}
