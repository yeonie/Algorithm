//
//  main.c
//  BiggestNumb
//
//  Created by 이동연 on 22/06/2020.
//  Copyright © 2020 litong. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int n, shot,numb, nanugi, max=0, temp=0, initial;
    
    scanf("%d %d %d", &n, &shot, &numb);
    
    int number[n];
    
    initial = numb;
    
    for(int i = 0 ; i < n ; i ++){
        nanugi = pow(10, (n-i-1));
        number[i] = numb/nanugi;
        numb = numb%nanugi;
    }
    
    if(shot ==1){
    
    for(int i = 0 ; i<n ; i++){

            temp = number[i];

        if(max <temp){
            max = temp;
        }
    }
    }
    
    if(shot == 2){
        for(int i = 0 ; i < (n-1) ; i++){
            
            temp = number[i]*10 + number[i+1];
            
            if(max < temp){
                max = temp;
            }
        }
    }
    
    if(shot == 3){
        for(int i = 0 ; i < (n-2) ; i++){
            
            temp = number[i]*100 + number[i+1]*10 + number[i+2];
            
            if(max < temp){
                max = temp;
            }
        }
    }
    if(shot == 4){
        for(int i = 0 ; i < (n-3) ; i++){
            
            temp = number[i]*1000 + number[i+1]*100 + number[i+2]*10 + number[i+3];
            
            if(max < temp){
                max = temp;
            }
        }
    }
    
    if(shot == 5){
        for(int i = 0 ; i < (n-4) ; i++){
            
            temp = number[i]*10000 + number[i+1]*1000 + number[i+2]*100 + number[i+3]*10 + number[i+4];
            
            if(max < temp){
                max = temp;
            }
        }
    }
    
    if(shot == 6){
        for(int i = 0 ; i < (n-5) ; i++){
            
            temp = number[i]*100000 + number[i+1]*10000 + number[i+2]*1000 + number[i+3]*100 + number[i+4]*10 + number[i+5];
            
            if(max < temp){
                max = temp;
            }
        }
    }
    
    if(shot == 7){
        for(int i = 0 ; i < (n-6) ; i++){
            
            temp = number[i]*1000000 + number[i+1]*100000 + number[i+2]*10000 + number[i+3]*1000 + number[i+4]*100 + number[i+5]*10 +number[i+6];
            
            if(max < temp){
                max = temp;
            }
        }
    }
    
    if(shot == 8){
        for(int i = 0 ; i < (n-7) ; i++){
            
            temp = number[i]*10000000 + number[i+1]*1000000 + number[i+2]*100000 + number[i+3]*10000 + number[i+4]*1000 + number[i+5]*100 +number[i+6]*10 + number[i+7];
            
            if(max < temp){
                max = temp;
            }
        }
    }
    
    if(shot == 9){
        for(int i = 0 ; i < (n-8) ; i++){
            
            temp = number[i]*100000000 + number[i+1]*10000000 + number[i+2]*1000000 + number[i+3]*100000 + number[i+4]*10000 + number[i+5]*1000 +number[i+6]*010 + number[i+7]*10 +number[i+8];
            
            if(max < temp){
                max = temp;
            }
        }
    }
    if(shot == 10){
        max = initial;
    }

    printf("\n%d", max);
    
    
}
