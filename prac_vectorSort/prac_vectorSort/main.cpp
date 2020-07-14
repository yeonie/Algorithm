//
//  main.cpp
//  prac_vectorSort
//
//  Created by 이동연 on 29/06/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int A[] = {3,1,4,1,5,9,2};
    vector<point> PV;
    point p;
    int temp = 0;
    vector<int> v1;
    vector<int> v2(5); //int v2[5];
    vector<int> v3(7, -1);// int v3[5] = {-1,-1,-1,-1,-1}
    
    cout<<v1.size()<<endl; //아무것도없는거출력
    cout<<v2.size()<<endl; //사이즈 5개짜리 출력
    cout<<v3.size()<<endl; //-1넣어둔거 출력
//    for(auto i = 0 ; i<v2.size() ;i++){
//        cout<<v2[i]<<endl;
//    }
    for(auto i = 0 ; i<v3.size() ; i++){
        v3[i] = A[i];
        cout << v3[i] <<" ";
    }
    
    return 0;
}
