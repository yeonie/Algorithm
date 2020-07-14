//
//  main.c
//  fordFulkerson
//
//  Created by 이동연 on 18/05/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int Person, canDoWork, edge, worker, workthing, temp, answer = 0;
    scanf("%d %d %d", &Person, &canDoWork, &edge);
    
    int **People = malloc(sizeof(int*)*2);
        //    이중 포인터에 (int 포인터 크기 * canDoWork)만큼 동적 메모리 할당
    
    for(int i = 0 ; i < edge; i++){ //세로 크기 만큼 반복
        People[i] = malloc(sizeof(int)*edge);
        //    이중 포인터에 (int 포인터 크기 * canDoWork)만큼 동적 메모리 할당 배열의 가로
    }
    
    input_value(People, Person, canDoWork, edge, worker, workthing, answer, temp);
//    output_value(People, edge, canDoWork);
    
    
    for(int i = 0 ; i< edge ; i++){
        free(People[i]);
    }
    
    free(People);
    
    return 0;
    
}

int input_value(int **m, int Person, int canDowork, int edge, int worker, int workthing, int answer, int temp){
//    int i = 0;
    int j = 0;
    for(int k = 0 ; k < edge ; k++){
        for(int t = 0 ; t < canDowork ; t++){
            m[k][t] = 0;
        }
    }
    for(j =0; j< edge ; j++ ){
        scanf("%d %d", &worker, &workthing);
        m[j][0] = worker;
        m[j][1] = workthing;
        
    }
    answer = 0;
//    printf("\n\n\n\n %d \n\n\n", answer);
    j = 0;
    int p = 0;
    for(j = 0 ; j < edge ; j++){
        temp = m[j][1];
        for(p=0 ; p < edge ; p++){
            if(p != j){
                if(m[p][1]==temp){
                    m[p][1]=0;
                    
                }
            }
            
        }
        
    }
    for(int k = 0 ; k < edge ; k++){
        if(m[k][1] != 0){
            answer++;
    }
    }
    if(answer <= worker && answer <= canDowork){
        printf("%d", answer);
    }
    else{
        if(worker >= canDowork){
            printf("%d", canDowork);
        }
        else{
            printf("%d", worker);
        }
    }

    
    
    
    return answer;
}





