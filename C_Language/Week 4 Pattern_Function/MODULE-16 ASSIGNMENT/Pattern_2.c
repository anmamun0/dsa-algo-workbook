#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    int s = N - 1;
    int k = 1;

    for (int i = 1; i <=N; i++)
    {
        for (int j = 1; j <= s; j++){
            printf(" ");
        }
        
        for (int j = k; j >= 1; j--){
            printf("%d", j);
        }
        if(i!=N){
        printf("\n");
        }
        s--;
        k++;
    }
    
    return 0;
}