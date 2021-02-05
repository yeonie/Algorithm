//
//  main.cpp
//  b_20001
//
//  Created by 이동연 on 2021/02/05.
//

#include <iostream>
#include <string>

using namespace std;

//#define start "고무오리 디버깅 시작"
//#define problem "문제"
//#define solve "고무오리"
//#define end "고무오리 디버깅 끝"

int main(){
    string str = "한글";
    int count = 0;
    
    string start = "고무오리 디버깅 시작";
    string problem = "문제";
    string solve = "고무오리";
    string end = "고무오리 디버깅 끝";
    
    while(true){
        getline(cin,str);
        if(str == problem){
            count++;
        }
        if(str == solve){
            if(count<=0){
                count+=2;
            }
            else{
                count--;
            }
        }
        if(str == end){
            if(count>0){
                cout<<"힝구"<<endl;
                return 0;
            }
            else{
                cout<<"고무오리야 사랑해"<<endl;
                return 0;
            }
        }
    }
    
}
