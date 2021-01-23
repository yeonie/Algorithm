//
//  main.cpp
//  bokli_Calculate
//
//  Created by 이동연 on 2021/01/23.
//

#include <iostream>
#include <cmath>
using namespace std;

int bokli(long long money, int n, float interest){
    for(int i = 0 ; i < n ; i++){
        money = money*interest;
    }
    cout<<n<<"일 후 "<<"잔액 :"<< money<< endl;
    return 0;
}
int main(){
    long long capitalStock = 0;
    int date=0;
    float interest = 0;
    cout<<"입금액 : ";
    cin>> capitalStock;
    cout<<"날짜 : ";
    cin>> date;
    cout<<"이율 : ";
    cin>> interest;

    bokli(capitalStock, date, interest);
}


