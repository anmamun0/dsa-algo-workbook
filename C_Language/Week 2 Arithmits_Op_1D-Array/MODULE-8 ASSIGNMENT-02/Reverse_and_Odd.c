#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);

    int array[N];
if(N>=1){
    for(int i = 0; i < N; i++){
        scanf("%d",&array[i]);
        // printf("%d_ ",array[(N-i)-1]);
    }

    for(int i=N-1; i>-1; i--){
        if(i%2==1){
            printf("%d ", array[i]);
        }
    }
} 
    return 0;
}