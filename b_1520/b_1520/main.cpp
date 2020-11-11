#include <iostream>
#include <vector>

using namespace std;

    int map[510][510] = {};
    int m, n ;

int main(void){
    
    cin>> m, n;
    
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            
            cout<< map[i][j]<< ' ';
        }
    }
    
    
}
