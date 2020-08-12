#include <iostream>

using namespace std;

int main(void){
    string input;
    int one=0;
    int zero=0;
//    int checkPoint;
    
    cin>> input;
    
//    input[0] == '0' ? zero++ : one++;
    if(input[0]=='0'){
        zero++;
    }
    else{
        one++;
    }
    for(int i = 1 ; i < input.length(); i++){
        if(input[i]=='0'&&input[i-1]=='1'){
            zero++;
        }
        else if(input[i]=='1'&&input[i-1]=='0'){
            one++;
        }
    }
    cout<< min(zero, one);
    
    
}
