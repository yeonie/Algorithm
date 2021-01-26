//
//  main.cpp
//  b_1942
//
//  Created by 이동연 on 2021/01/26.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string startTime, endTime;
    int big=0, small=0;
    int chai = 0;
    int count = 0;
    
    cin>>startTime>>endTime;
//    cin>>endTime;
    
    int si1, boon1, cho1;
    int si2, boon2, cho2;
    
    cho1 = startTime[6]*10+startTime[7];
    boon1 = startTime[4]*10+startTime[5];
    si1 = startTime[0]*10 + startTime[1];
    
    cho2 = endTime[6]*10+endTime[7];
    boon2 = endTime[4]*10+endTime[5];
    si2 = endTime[0]*10 + endTime[1];

    
    
    while(시작시간이랑 끝시간이 같지 않는 동안 반복){
        if(초가 60초가 넘어가면)
        {
            초 00으로 바꿔주고
            분에 1 추가
            if(근데 9분이넘어가면?)
            {
                10분단위에 1추가
                1분단위는 0
            }
            if(근데 10분단위가 59이 넘어가면?){
                분단위는 00
                시간에 1추가
            }
            if(근데 시간단위가 23을 넘어가면){
                전부 000000
            }
            
        }
        템프값이 숫자 다 내리 담기
        if(템프값 %3 == 0이면)
        {
            count++;하자
        }
        
        ㄴㄴ 배열로 해서 다 더하면 그다음 배열 올라가는걸로
    }
        
    while(cho1!=cho2 && boon1!=boon2 && si1!=si2){
        if(cho1 > 59){
            cho1 = 0;
            boon1 += 1;
            if(boon1 > 59){
                boon1 = 0;
                si1 += 1;
                if(si1 > 23){
                    si1 = 0;
                    boon1 = 0;
                    cho1 = 0;
                }
            }
        }
    }
        
//    int hour = 0;
//    for(int i = startTime[0]*10+startTime[1] ; i < endTime[0]*10+endTime[1] ; i++){
//        if(startTime[0]*10+startTime[1]>23){
//            startTime[0] = 0;
//            startTime[1] = 0;
//            startTime[3] += 6;
//        }
//        if(endTime[0]*10+endTime[1]>23){
//            endTime[3] += 6;
//        }
//        if(i%3==0){
//            count++;
//        }
//    }
//
    cout<<(big-small)<<endl;
    
//    big = stoi(endTime);
    
    
    
    
    
}
