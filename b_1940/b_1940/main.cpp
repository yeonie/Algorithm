//
//  main.cpp
//  b_1940
//
//  Created by 이동연 on 2021/01/27.
//

//#include <iostream>
//
//using namespace std;
//
//int stuff[15001]{0};
//
//int main(){
//    int n, m;
//    int count=0;
//    cin>>n >>m;
//
//    for(int i = 0 ; i < n ; i++){
//
//        cin>>stuff[i];
//
//    }
//    for(int i = 0 ; i < n ; i++){
//        for(int j = 0 ; j < i ; j++){
//            if(stuff[i]+stuff[j]==m){
//                count++;
//            }
//        }
//    }
//    cout<<count;
//
//
//}

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int>v;
    
    for(int i = 0 ; i < n ; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    
    int start = 1, end = m-1, count = 0;
    
    while(start < end) {
        if(v[start] != 0 && v[end] != 0) {
            if(start + end == m) {
                count++;
            }
        }
        start++;
        end--;
    }
    cout<<count-1;
}
