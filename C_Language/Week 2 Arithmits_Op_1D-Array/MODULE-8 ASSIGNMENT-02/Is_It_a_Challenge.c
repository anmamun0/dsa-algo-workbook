#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    // printf("%d\n", N);
    
    if(N>0){  
        for(int i=1; i<=N ;i++){
            printf("%d ", i);
        }
    }
    else if(N<0){   
        for(int i= N; i < 1 ; i++){
            printf("%d ", i);
   
        }
    }
    else{
        printf("0 ");
    }
    


  
        
    return 0;
}
