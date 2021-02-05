//
//  main.cpp
//  b_1654
//
//  Created by 이동연 on 2021/02/02.
//

#include <iostream>
#include <vector>
using namespace std;

vector<long long>v;
int k, n;

bool possible(long long len){
    int cnt = 0;
    for (int i = 0; i < k; i++){
        cnt += v[i] / len;
    }
        //조건 충족 여부
    if (cnt >= n){
        return true;
    }
        return false;
}



int main(){
    
    long long high = 0;
    
    cin>>k>>n;
    
    for(int i = 0 ; i < k ; i++){
        int temp;
        cin>> temp;
        v.push_back(temp);
        high = max(v[i],high);
    }
    long long result = 0;
    long long low = 1;
    while (low <= high){
        long long mid = (low + high) / 2;
        if (possible(mid)){
            if (result < mid){
                result = mid;
            }
            low = mid + 1;
        }else
            high = mid - 1;
    }
    cout << result << endl;

    return 0;
}



