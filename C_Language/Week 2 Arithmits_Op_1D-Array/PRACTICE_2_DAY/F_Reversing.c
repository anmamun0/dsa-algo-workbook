#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    if(N>=1){

        int array[N];
        for(int i = 0; i<N; i++){
            scanf("%d", &array[i]);
        }

        int next_N= N-1;

        for (int i = next_N ; i >=0 ; i--)
        {
            printf("%d ", array[i]);
        }

    }
    return 0;
}