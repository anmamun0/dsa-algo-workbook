#include <stdio.h>
void odd_even()
{
    int N;
    scanf("%d", &N);

    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }


    int even = 0, odd = 0;
    for (int i = 0; i < N; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}

int main()
{
    odd_even();

    return 0;
}