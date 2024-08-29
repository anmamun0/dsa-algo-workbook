#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);

    int s = N - 1;
    int k = 1;

    for (int i = 1; i < N*2; i++)
    {
        for (int j = 1; j <= s;j++){
            
            printf(" ");
        }

        for (int j = 1; j <= k; j++){
            if(i%2== 0){
                printf("-");

            }
            else{
                printf("#");
            }
        }
        if(i!=N*2-1){
        printf("\n");
        }


        if(i<N){
            s--;
            k += 2;
        }
        else{
            s++;
            k -= 2;

        }
    }
    


    return 0;
}