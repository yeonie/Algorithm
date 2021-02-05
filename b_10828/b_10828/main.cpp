//
//  main.cpp
//  b_10828
//
//  Created by 이동연 on 2021/02/04.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int>v;

int main(){
    int n;
    cin>> n;
    string str;
    int count = 0;
    
    for(int i = 0 ; i < n ; i++){
        cin>> str;
        
        if(str=="push"){
            int temp;
            cin>>temp;
            v.push_back(temp);
            count++;
        }
        if(str=="top"){
            if(count<=0){
                cout<<-1<<endl;
            }
            else{
                cout<<v.back()<<endl;
            }
        }
        if(str=="size"){
            cout<<v.size()<<endl;
        }
        if(str=="empty"){
            if(v.size()==0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        if(str=="pop"){
            if(v.size()<=0){
                cout<<-1<<endl;
            }
            else{
                cout<<v.back()<<endl;
                v.pop_back();
                count--;
            }
        }
    }
}
