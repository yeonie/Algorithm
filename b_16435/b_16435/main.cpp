#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<int>fHeight;
    int fruit;
    int sLen;
    cin>>fruit;
    cin>> sLen;
    
    for(int i =0 ; i < fruit ; i++){
        int fHeightTemp;
        cin>> fHeightTemp;
        fHeight.push_back(fHeightTemp);
    }
    sort(fHeight.begin(), fHeight.end());
    
    for(int i =0; i< fruit;i++){
        if(fHeight[i]<=sLen){
            sLen++;
        }
    }
    
    cout<<sLen;
    
}
