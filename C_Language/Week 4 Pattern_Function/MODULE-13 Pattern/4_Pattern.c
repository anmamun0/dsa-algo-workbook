#include<stdio.h>
int main(){

    int N,s,k;
    scanf("%d", &N);
    s = N-1;
    k = 1;
    for (int i = 1; i <=(N*2)-1; i++)
    {
        for (int j = 1; j <= s; j++){
            printf(" ");
        }
         for (int j = 1; j <=k ; j++){
            printf("*");
        }
        

        if (i<N)
        {
            s--;
            k += 2;
        }
        else{
            s++;
            k -= 2;
        }
        printf("\n");
        
    }
    
    return 0;
}

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/