#include<stdio.h>
void my_recersion(int N){
    if(N==0)
        return;
    my_recersion(N - 1);
    
    printf("%d\n", N);
    
}
int main(){

    int N;
    scanf("%d", &N);
    my_recersion(N);
    return 0;
}