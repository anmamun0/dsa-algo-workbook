#include<stdio.h>
int main(){

    int N,k = 1;
    
    scanf("%d", &N);
    int i = 0;
   
   for (int i = 1; i <= N; i++)
   {
       for (int j = 1; j <= k;j++){
           printf("*");
       }
       printf("\n");
       k++;
   }
    return 0;
}

/*
#include<stdio.h>
int main(){

    int N;
    ;
    scanf("%d", &N);
    int  k = N;
   
   for (int i = N; i > 0; i--)
   {
       for (int j = 1; j <= k;j++){
           printf("*");
       }
       printf("\n");
       k--;
   }
*/