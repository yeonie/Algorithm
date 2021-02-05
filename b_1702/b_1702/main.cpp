//
//  main.cpp
//  b_1702
//
//  Created by 이동연 on 2021/02/03.
//

#include <iostream>

using namespace std;

int main(){
    long long x, y, z;
//    float z;
    cin>>x>>y;
    if(x==y){
        cout<<-1;
    }
    
    z = y*100/x;
    
    //y = xz/100
//    x가 10
//    y가 8
//    z가 80
    long long tempY = x*(z+1)/10;
    cout<< z<<endl;
    cout<< y<<endl;
    cout<< tempY<<endl;
    cout<< tempY-y<<endl;
    
//    else{
//        while(temper==z){
//            temper = float(y/x*100);
//            x*temper = y*100;
//            y = x*temper/100;
            
//            tempY = x*(temper+1)/100;
//            y = (y + tempY)/2;
//            아니 그러면 tempY-y가 정답이네
//        }
//    }
}
