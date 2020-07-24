//
//  main.cpp
//  sort_func
//
//  Created by 이동연 on 24/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;


class Student{
public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }
//    정렬기준은 점수가 작은 순서
    bool operator <(const Student &student)const{
        return this->score > student.score;
    }
};

bool compare(int a, int b){
    return a>b;
}

int main(void){
    
    Student student[] = {
        Student("나동연" , 97),
        Student("나웅현" , 88),
        Student("김정환" , 70),
        Student("김불구" , 64),
        Student("김재호" , 60),
        Student("김현수" , 90)
    };
    sort(student,student+6);
    
    for(int i = 0 ; i < 6 ; i++){
        cout<< student[i].name<< " : "<< student[i].score<<endl;

    }

}

