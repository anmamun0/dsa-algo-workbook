#include<stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    int space = N - 1;
    int work = 1;

    for (int i = 1; i <= N*2; i++)
    {
        for (int j = 1; j <= space;j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= work; j++)
        {
            printf("*");
        }
        if(i<N){
            space--;
            work += 2;
        }
        else if(i==N){
            int space = N - 1;
            int work = 1;
        }
        else{
            space++;
            work -= 2;
        }
        if(i!=N*2){
            printf("\n");
        }
    }
    
    return 0;
}