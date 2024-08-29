#include<stdio.h>
int fun(int i, int N){
    if (i==N)
        return 0;
    int x;
    scanf("%d", &x); // input : 10 20 30 40 50 ; output:150

    int result = fun(i + 1,N);
    
    printf("%d\n", x); 

    return result+x;
    
}
int main(){
    int N;
    scanf("%d", &N);

    int l = fun(0, N);
    printf("%d\n", l);
    return 0;
}