#include<stdio.h>
void count_before_one(int a[],int N){
    for (int i = 0; i < N; i++)
    {
        if (a[i] == 1){
            printf("%d", i);
            break;
        }
    }
    
}

int main(){

    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    count_before_one(array, N);

    return 0;
}