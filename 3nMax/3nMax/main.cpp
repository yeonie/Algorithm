//
//  main.cpp
//  3nMax
//
//  Created by 이동연 on 15/06/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int block;
int n[46];

void howManyPut()
{
    //3x1 블럭일 경우.
    n[1] = 1;
    //3x2 블럭일 경우.
    n[2] = 1;
    //3x3 블럭일 경우.
    n[3] = 2;
    
    if (block <= 3)
    {
        cout << n[block];
        return;
    }
    
    //3x4이상의 블럭일 경우.
    else{
        
    for (int i = 4; i <= block; i++)
    {
        n[i] = n[i - 1] + n[i - 3];
    }
    cout << n[block];
    return;
    }
}
int main(void)
{
    
    scanf("%d", &block);
    for (int i = 1; i <= block; i++)
    {
        n[block] = 0;
    }
    howManyPut();
    
    system("pause");
    
    return 0;
}
