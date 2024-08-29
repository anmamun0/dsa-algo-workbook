#include <stdio.h>
void max_min(int x[], int n)
{

    int min = x[0];
    int max = x[0];
    for (int i = 0; i < n ; i++)
    {
        if (min > x[i])
        {
            min = x[i];
        }
        if (max < x[i])
        {
            max = x[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{
    int N;
    scanf("%d", &N);

    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &array[i]);
    }

    max_min(array, N);

    return 0;
}