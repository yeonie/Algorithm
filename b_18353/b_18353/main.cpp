#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<long long int> v;
    
    long long int max = 0;
    int cnt = 0;
    int n;
    cin>> n;
    
    for(int i = 0 ; i < n ; i++){
        long long int temp;
        cin>> temp;
        v.push_back(temp);
    }
    for(int i = 0 ; i < n-1 ; i++){
        max=v[i];
        if(max<v[i+1]){
            cnt++;
        }
    }
    
    cout<< cnt;
    
}
