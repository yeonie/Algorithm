#include <iostream>

using namespace std;

int bridge[31][31];

int main(){
    int start, arrive;
    int n;
    cin >> n;
    
    for(int i = 1 ; i <=30 ; i++){
        bridge[i][1] = i;
    }
    
    for(int k = 0 ; k < n ; k++){
        cin>> start >>arrive;
        for(int i = 2 ; i <= arrive ; i++){
            for(int j = 2 ; j <= start ; j++){
                bridge[i][j] = bridge[i][j-1]*(i-j+1)/(j);
            }
        }
        cout<< bridge[arrive][start]<<endl;
    }
}

