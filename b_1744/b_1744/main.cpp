#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    vector<int>v;
    int n;
    cin>>n;
    int flag = -10001;
    int sum = 0;
    int dduk=0;
    
    for(int i =0; i < n ; i++){
        int temp;
        cin>> temp;
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    
    for(int i = 0; i < n ; i++){
        if(v[i]==0){
            flag = i;
        }
    }
    
    if(flag>=2&&flag%2==0){
        for(int i = 0; i<flag;i+=2){
            sum+=v[i]*v[i+1];
        }
        for(int j = flag+1 ; j< n; j+=2){
            sum+=v[j]*v[j+1];
        }
    }
    else if(flag>=2&&flag%2==1){
        sum +=v[0]*v[flag];
        for(int i = 1 ; i<flag;i+=2){
            sum+=v[i]*v[i+1];
        }for(int j = flag+1 ; j< n; j+=2){
            sum+=v[j]*v[j+1];
        }
    }
    else if(flag==1){
        sum += v[0]*v[flag];
        for(int j = flag+1 ; j< n; j+=2){
            sum+=v[j]*v[j+1];
        }
    }
    
    else if(flag==0){
        for(int i = 1; i<n;i+=2){
            sum += v[i]*v[i+1];
        }
    }
    else if(flag==-10001){
        for(int i=0;i<n;i++){
            if(v[i]<0){
                dduk=i;
            }
        }
        for(int i = 0 ; i<=dduk;i++){
            sum +=v[i];
        }
        for(int j = dduk+1; j < n ; j+=2){
            sum += v[j]*v[j+1];
        }
    }
    
    cout<< sum;
}
