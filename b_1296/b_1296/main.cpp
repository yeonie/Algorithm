#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int matchers_combi(int girls_n, int Lcnt, int Ocnt, int Vcnt, int Ecnt, vector<pair<int, string>> combinate){
    string p_matcher;
    
    for(int i = 0 ; i < girls_n ; i++){
        int combi=0;
        int Ltemp=0;
        int Otemp=0;
        int Vtemp=0;
        int Etemp=0;
        cin>> p_matcher;
        for(int i = 0 ; i < p_matcher.length() ;i++){
            
            if(p_matcher[i]=='L'){
                Ltemp = Lcnt+1;
            }
            else if(p_matcher[i]=='O'){
                Otemp = Ocnt+1;
            }
            else if(p_matcher[i]=='V'){
                Vtemp = Vcnt+1;
            }
            else if(p_matcher[i]=='E'){
                Etemp = Ecnt+1;
            }
        }
        combi = ((Ltemp+Otemp)*(Ltemp+Vtemp)*(Ltemp+Etemp)*(Otemp+Vtemp)*(Otemp+Etemp)*(Vtemp+Etemp))%100;
        combinate.push_back(pair<int, string>(combi, p_matcher));
        }
    sort(combinate.begin(),combinate.end());
    
    int min=1000;
    for(int i = 0; i < girls_n-1 ; i++){
        if(combinate[girls_n-1].first==combinate[i].first){
            if(combinate[i].second[0]<min){
                min = combinate[i].second[0];
            }
        }
    }
    for(int i = 0 ; i < girls_n-1; i++){
        if(combinate[i].second[0]==min){
            cout<<combinate[i].second;
        }
    }
//    for(int i = 0 ; i < girls_n-1;i++){
//        cout<<combinate[i].second<< ' ' <<combinate[i].second[0]<<endl;
//    }
    
    
    return 0;
}

int main(void){
    vector<pair<int, string>> combinate;
    int girls_n;
    string matcher;
    string p_matcher;
    
    int Lcnt=0;
    int Ocnt=0;
    int Vcnt=0;
    int Ecnt=0;
    
    
    cin>> matcher;
    cin>> girls_n;
    
    
    for(int i = 0 ; i < matcher.length() ;i++){
        if(matcher[i]=='L'){
            Lcnt++;
        }
        else if(matcher[i]=='O'){
            Ocnt++;
        }
        else if(matcher[i]=='V'){
            Vcnt++;
        }
        else if(matcher[i]=='E'){
            Ecnt++;
        }
    }
    
    matchers_combi(girls_n, Lcnt, Ocnt, Vcnt, Ecnt, combinate);
    
}
