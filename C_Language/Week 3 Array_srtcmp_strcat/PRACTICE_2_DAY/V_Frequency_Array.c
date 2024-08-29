#include<stdio.h>
int main(){

    int N, M;
    scanf("%d %d", &N, &M);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &array[i]);
        // printf("%d ", array[i]);
    }
    
    int count[100001] = {0};

    for (int i = 0; i < N; i++)
    {
        int value = array[i];
        count[value]++;
    }
    // printf("%d ", count[3]);
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", count[i]);
    }
    
    

    return 0;
}