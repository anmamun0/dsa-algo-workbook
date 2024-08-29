#include <stdio.h>
int main()
{

    int M;
    scanf("%d ", &M);
    int array_1[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d ", &array_1[i]);
    }

    int N;
    scanf("%d", &N);
    int array_2[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array_2[i]);
    }

    int array_store[M + N];

    for (int i = 0; i < M; i++)
    {
        array_store[i] = array_1[i];
    }

    int j = M;
    for (int i = 0; i < N; i++)
    {
        array_store[j] = array_2[i];
        j++;
    }

    for (int i = 0; i < M + N; i++)
    {
        printf("%d ", array_store[i]);
    }

    return 0;
}