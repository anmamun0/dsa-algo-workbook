#include<stdio.h>
void my_recersion(int N){
    if(N==0)
        return;
        if(N!=1){
             printf("%d ", N);
        }
        else{
             printf("%d", N);
        }

    my_recersion(N - 1);
}
int main(){

    int N;
    scanf("%d", &N);
    my_recersion(N);
    return 0;
}