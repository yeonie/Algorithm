#include <iostream>

using namespace std;



int main(void){
    
    int man, girl, internship, answer=0;
    cin>> girl >> man >> internship;
    
    
    while(true){
        //지금 가진 인원(남녀 포함) 한 팀을 이루었을 때, 남은 인원보다, 인턴십에 참여해야하는 인원이 더 많으면 안되는경우
        //한팀을 이루기위해서 여성은 2이상
        //한 팀을 이루기위해서 남성은 1이상
        if(internship<=((girl-2)+(man-1)) && man>=1 && girl>=2){
            man = man-1;
            girl = girl-2;
            answer++;
        }
        else{
            break;
        }
    }
    
    cout<< answer;
}

