#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(void){
    vector<int>v;
    //0이 포함되어야함
    //각 자리의 숫자 합이 3의 배수여야 함
    bool checker = false;
    bool checker2;
    int nan = -1;
    string input;
    long long sum = 0;
    cin>> input;
    
    
    for(int i = 0 ; i < input.length();i++){
        v.push_back(input[i]);
    }
    
    
    for(int i = 0 ; i < input.length();i++){
        if(v[i]-48==0){
            checker= true;
        }
    }
    
    
    for(int i = 0 ; i <input.length();i++){
        sum = v[i] - 48+ sum;
    }
    
//    cout<<"check"<<sum<<endl;
    if(sum % 3 == 0){
        checker2=true;
    }
    else{
        checker2=false;
    }
    
    if(checker&&checker2){
        sort(v.begin(),v.end(),compare);
        for(int i= 0; i < input.length();i++){
            cout<<v[i]-48;
        }
    }
    else{
        cout<<nan;
    }
    
//    cout<< checker<< ' ' << checker2<<endl;
    
    
    
    
    
}
