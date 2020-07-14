//
//  main.c
//  boostcamp_codeTest
//
//  Created by 이동연 on 04/07/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool solution(const char* name_list[], size_t name_list_len){
    bool answer = false;
    
    for(int i = 0 ; i < name_list_len ; i++){
        for(int j = 0 ; j < name_list_len ; j++){
            if(name_list[i] == name_list[j] && i != j){
               answer = true;
                
            }
            else{
                answer = false;
            }
        }
    }
    printf("%d", answer);
    
    
    return answer;
}

int main(int argc, const char * argv[]) {
    const char* name_list[2];
    name_list[0] = "abc";
    name_list[1] = "여울";
    name_list[2] = "ccc";
    int name_list_len = sizeof(name_list)/sizeof(int);
    // insert code here...
    printf("\n%d\n", name_list_len);
    printf("\n%d\n", name_list[1][0]);
    printf("\n%c\n", name_list[0][2]);
    if(name_list[1][0] == name_list[1][2]){
        
        printf("true\n");
    }
    solution(name_list, name_list_len);
    return 0;
}
