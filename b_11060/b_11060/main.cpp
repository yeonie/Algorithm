#include <iostream>

using namespace std;

int position[1001] = {0,};

int main(){
    
    int n;
    cin>>n;
    
    position[1]=1;
    
    for(int i = 1; i < n ; i++){
        int score;
        cin>> score;
        
        if(position[i]==0){
            break;
        }
        for (int j = 1; j <= score; ++j){
                    if (i + j > 1000){
                        break;
                    }
                    if (position[i + j] > position[i] + 1 || position[i + j] == 0){
                        position[i + j] = position[i] + 1;
                    }
                }
    }
    if(position[n] == 0){
            cout << -1 << endl;
    }
    else{
        cout<< position[n] - 1 << endl;
    }
    
}
