//
//  main.cpp
//  b_11478
//
//  Created by 이동연 on 2021/02/01.
//

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string str;
    set<string>strset;
    
    cin>> str;
    
    set<string>::iterator iter;
    
    for(int i = 0 ; i< str.size();i++){
        for(int j = 1 ; j<=str.size()-i;j++){
            string temp = str.substr(i,j);
            strset.insert(temp);
        }
    }
    
    cout<<strset.size()<<endl;

    
    
}
//5개일 때 12개
//4개일 때 10개
//3개일 때 5개
//2개일 때 3개


//abab

//a b a b ab ba ab aba bab abab

//aba

//a b a ab ba aba
