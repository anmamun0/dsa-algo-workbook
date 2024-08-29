#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int space = N - 1;
    int work = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= work; j++)
        {
            printf("*");
        }
        if (i != N)
        {
            printf("\n");
        }
        space--;
        work += 2;
    }

    return 0;
}