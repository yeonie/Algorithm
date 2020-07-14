//
//  main.cpp
//  cppPermutation
//
//  Created by 이동연 on 15/06/2020.
//  Copyright © 2020 litong. All rights reserved.
//


#include <iostream>

using namespace std;

int main(){
    
    //auto
    auto NPCname = "BurgerKing";
    cout << NPCname << endl;
    auto Number = 1;
    cout << Number << endl;
    
    printf("\n\n");
    
    //reference
    //이거 잘 이해 안댐.
    int UserMode = 4;
    auto* pUserMode = &UserMode;
    cout<< *pUserMode << endl;
    auto& refUserMode = UserMode;
    refUserMode = 5;
    cout<< UserMode << endl;
    
    printf("\n\n");
    
    //for
    int NumberList[5] = {1,2,3,4,5};
    for( auto i :  NumberList)
        cout<< i << " " ;
    
    printf("\n\n");
    
    
    //pair
    pair<int, int> foo;
    foo = make_pair(10,20);
    
    cout<<"foo: "<< foo.first << "," <<foo.second<<endl;
    
    printf("\n\n");
    
    //Template
    
//    template<typename T>const T&my_max(const T&x, constT&y)
//    {
//        return(y<x)?x:y;
//    }
//    int main(){
//        cout<<my_max(3,7)<<endl;
//        cout<<my_max(3.0,7.5)<<endl;
//        cout<<my_max<double>(3, 7.5)<<endl;
//        return 0;
//    }
    
    return 0;
}



