//
//  main.cpp
//  b_11655
//
//  Created by 이동연 on 2021/08/04.
//

#include <iostream>

using namespace std;

int main(){
    string s;
    
    getline(cin, s);
    
    for(int i = 0 ; i < s.size() ; i++){
//        13차이
        if(s[i]<65){
            cout<<s[i];
        }
        else{
            if(s[i]<78){
                cout<<char(s[i]-13+26);
            }
            else if(s[i]>=78&&s[i]<=90){
                cout<<char(s[i]-13);
            }
            else if(s[i]>=97&&s[i]<110){
                cout<<char(s[i]-13+26);
            }
            else{
                cout<<char(s[i]-13);
            }
        }
        }
    cout<<endl;
    
    
}
