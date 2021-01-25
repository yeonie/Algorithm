//
//  main.cpp
//  b_2949
//
//  Created by 이동연 on 2021/01/25.
//

//#include <iostream>
//using namespace std;
//
//int main(){
//    int ary[6] = {0};
//    ary[5] = 10;
//
//
//    for(int i = 0 ; i < 5 ; i++){
//        cin>> ary[i];
//    }
//
//
//        for(int i = 0 ; i < 5 ; i++){
//            for(int j = 0 ; j < 5-i ; j++){
//                if(ary[j]>ary[j+1]){
//                    int temp = 0;
//                    temp = ary[j];
//                    ary[j] = ary[j+1];
//                    ary[j+1] = temp;
//    //                swap(ary[i],ary[i+1]);
//                    for(int k = 0 ; k < 5 ; k++){
//                        cout<<ary[k]<<" ";
//                    }
//                    cout<<endl;
//                }
//
//            }
//        }
//
//
//    }
#include <iostream>
using namespace std;

int main(){
    int ary[6] = {0};
    ary[5] = 10;
    
    
    for(int i = 0 ; i < 5 ; i++){
        cin>> ary[i];
    }
    

        for(int i = 0 ; i < 5 ; i++){
            for(int j = 0 ; j < 5-i ; j++){
                if(ary[j]>ary[j+1]){
                    int temp = 0;
                    temp = ary[j];
                    ary[j] = ary[j+1];
                    ary[j+1] = temp;
    //                swap(ary[i],ary[i+1]);
                    for(int k = 0 ; k < 5 ; k++){
                        cout<<ary[k]<<" ";
                    }
                    cout<<endl;
                }

            }
        }
    

    }
