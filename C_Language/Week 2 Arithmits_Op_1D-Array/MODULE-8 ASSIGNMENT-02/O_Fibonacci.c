#include<stdio.h>
int main(){

    long long int N;
    scanf("%lld", &N);

    long long int array[N];

    long long int a = 0, b = 1;
    array[0]= 0;
    array[1] =1;
    
    // printf("%d %d ",a,b);

    for(int i=1; i<N; i++){
        long long int avg = a +b ;
        array[i+1]= avg;
        a = b;
        b = avg;
    }
    printf("%lld",array[N-1]);
    return 0;
}