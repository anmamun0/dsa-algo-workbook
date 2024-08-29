#include<stdio.h>
int main(){

    int N;
    long long int summation=0 ;
    scanf("%d",&N);
  
        long long int arrary[N];
        for(int i=0; i<N;i++){
            scanf("%lld",&arrary[i]);
            summation+=arrary[i];
        }
        if (summation<0)
        {
            printf("%lld",summation*-1);
        }
        else{
            printf("%lld",summation);
        }
   
    return 0;
}