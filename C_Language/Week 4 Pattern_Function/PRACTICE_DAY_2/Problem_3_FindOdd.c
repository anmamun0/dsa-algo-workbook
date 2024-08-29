#include<stdio.h>
void count_odd(int ar[],int N){
    int count = 0;
    for (int i = 0; i <N; i++)
    {
        if (ar[i] % 2 == 1){
            count++;
        }
    }
    printf("%d", count); 
}
int main(){

    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &array[i]);
    }
    count_odd(array, N);

    return 0;
}