#include <iostream>
#include <vector>

using namespace std;

int main(void){
    
    int crainMax = -1;
    int containerMax = -1;
    
    int m;
    vector<int>container;
    vector<int>crain;
    
    cin>> m;
    for(int i = 0 ; i < m ; i++){
        int temp;
        cin>> temp;
        crain.push_back(temp);
        if(crainMax<crain[i]){
            crainMax = crain[i];
        }
    }
    
    
    int n;
    cin>> n;
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>> temp;
        container.push_back(temp);
        if(containerMax<container[i]){
            containerMax= container[i];
        }
    }
    
    
    sort(container.begin(),container.end());
    sort(crain.begin(), crain.end());
    
    
    if(crainMax<containerMax){
        cout<< "-1";
    }
    else if (n<=m){
        cout<< "1";
    }
    else{
        
    }
    
    
}
