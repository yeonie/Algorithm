//
//  main.cpp
//  template
//
//  Created by 이동연 on 15/06/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>

//시발 이거 안됌.
template<typename T>const T&my_max(const T&x, constT&y)
{
    return(y<x)?x:y;
}
int main(){
    
    std::cout<<my_max(3,7)<<std::endl;
    std::cout<<my_max(3.0,7.5)<<std::endl;
    std::cout<<my_max<double>(3, 7.5)<<std::endl;
    return 0;
}
