//
//  main.cpp
//  b_10845
//
//  Created by 이동연 on 2021/08/03.
//

#include <iostream>
#include <vector>

using namespace std;

int n;
string command;
vector<int> que;

int main(){

    cin>>n;
    
    for(int i = 0 ; i < n ; i++){
        cin>> command;
        
        if(command[1]=='u'){
            if(command[5]=='b'){
                int num;
                cin>> num;
                que.push_back(num);
            }
            else{
                int num;
                cin>> num;
                que.insert(que.begin(), num);
            }
        }
        if(command[1]=='o'){
            if(que.empty()){
                cout<<-1<<endl;
            }
            else{
                if(command[4]=='f'){
                    cout<<que.front()<<endl;
                    que.erase(que.begin());

                }
                else{
                    cout<<que.back()<<endl;
                    que.erase(que.end()-1);
                }
            }

        }
        if(command[1]=='i'){
            cout<<que.size()<<endl;
        }
        if(command[1]=='m'){
            if(que.empty()){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        if(command[1]=='r'){
            if(que.empty()){
                cout<<-1<<endl;
            }
            else{
                cout<<que[0]<<endl;
            }
        }
        if(command[1]=='a'){
            if(que.empty()){
                cout<<-1<<endl;
            }
            else{
                cout<<que.back()<<endl;
            }
        }
           
        
    }
}
