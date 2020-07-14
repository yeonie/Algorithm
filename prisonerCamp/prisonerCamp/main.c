#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size, prisoner;
    scanf("%d %d", &size, &prisoner);
    
    int **d_Array = malloc(sizeof(int*)*size);
    
    for(int i = 0 ; i < size ; i++){
        d_Array[i] = malloc(sizeof(int)*size);
    }
    
    input_value(d_Array, size, prisoner);
    output_value(d_Array, size);
    
    for(int i = 0 ; i < size; i++){
        free(d_Array[i]);
    }
    
    free(d_Array);
    
    return 0;
}

int input_value(int **m, int size, int prisoner){
    
    //2차원 배열 값 초기화
    for(int i = 0; i < size; i++){
        for(int j = 0 ; j < size ; j++){
            m[i][j] = 0;
        }
    }
    
    //포로의 좌표에 따라 포로가 들어가면 1로 바꿔주는
    int x, y;
    for(int n = 0 ; n < prisoner ; n++){
        scanf("%d %d", &x, &y);
        m[x][y] = 1;
    }
    
    
    
    return 0;
}

int output_value(int **m, int size){
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
