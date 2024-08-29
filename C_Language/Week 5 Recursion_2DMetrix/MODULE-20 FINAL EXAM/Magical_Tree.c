@AN.Mamun
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N % 2 == 1)
    {
        // Odd number range;---------------------
        int number_range = 0;
        for (int i = 0; i <= N; i++)
        {
            if (i % 2 == 1)
            {
                number_range++;                                           
            }
        }
        //-------------------------------------------------
        int x = 5;
        int line = x + number_range;
        int s = line, k = 1;

        for (int i = 1; i <= line; i++)
        {
            for (int j = 1; j < s; j++)
            {
                printf(" ");
            }
            for (int i = 1; i <= k; i++)
            {
                printf("*");
            }
            printf("\n");
            s--;
            k += 2;
        }
        for (int i = 1; i <= 5; i++)
        {
            for (int i = 1; i <= 5; i++)
            {
                printf(" ");
            }
            for (int i = 1; i <= N; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}