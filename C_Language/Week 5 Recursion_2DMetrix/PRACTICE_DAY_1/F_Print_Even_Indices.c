#include <stdio.h>
void my_recursion(int a[], int N)
{
    if (N < 0)
        return;

    if (N % 2 == 0)
    {
        if (N != 0)
        {
            printf("%d ", a[N]);
        }
        else
        {
            printf("%d", a[N]);
        }
    }
    my_recursion(a, N - 1);
}
int main()
{

    int N;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
        // printf("%d\n", array[i]);
    }

    my_recursion(array, N - 1);

    return 0;
}