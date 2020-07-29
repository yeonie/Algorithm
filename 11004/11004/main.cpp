#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    vector<int>v;
    long long n;
    int k;
    scanf("%d %d", &n, &k);
    
    for(int i = 0; i < n ; i++){
        int input;
        scanf("%d", &input);
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    printf("%d",v[k-1] ) ;
}
