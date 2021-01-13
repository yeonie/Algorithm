//
//  main.cpp
//  b_2529
//
//  Created by 이동연 on 2021/01/13.
//

#include <iostream>
#define MAX 20

using namespace std;

int N = 0;
char judger;
int judge = 1;
int classify[MAX];


void classifier(int x){
    
    int i = 0;
    classify[0]=x;
    
        for(i=0; i < 2*N ; i++){
            if(classify[i+1]==-1){
                classify[i+2] = x++;
                if(x>9){
                    x--;
                    classifier(x);
                }
            }
            else if(classify[i+1]==-10){
                classify[i+2] = x--;
                if(x<0){
                    x++;
                    classifier(x);
                }
            }
        }
    for(int i = 0; i < 2*N;i++){
        cout<<classify[i];
    }
}



int main(){
    cin>>N;
    for(int i = 1 ; i < 2*N ; i=i+2){
        cin>>judger;
        if(judger == '<'){
            classify[i] = -1;
        }
        else{
            classify[i] = -10;
        }
    }
    
    classifier(5);
    
    
    
    
    
    
}
