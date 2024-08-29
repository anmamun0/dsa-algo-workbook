#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    while (N--)
    {
        char fast[51], second[51];
        scanf("%s %s", fast, second);

        int a = strlen(fast), b = strlen(second);
        int max = a;

        if (b > max)
        {
            max = b;
        }

        for (int i = 0; i < max; i++)
        {
            if (i < a)
            {  
                printf("%c", fast[i]);
            }
            if (i < b)
            {
                printf("%c", second[i]);
            }
        }
        printf("\n");
    }

    return 0;
}











/*
#include <stdio.h>
#include <string.h>
int main()
{

    int N;
    scanf("%d", &N);
    char fast[51], second[51];

    for (int i = 0; i < N; i++)
    {
        scanf("%s %s", fast, second);
        int length_fast = strlen(fast);
        int length_second = strlen(second);

        int length_small, length_big;

        if (length_fast > length_second)
        {
            length_big = length_fast;
            length_small = length_second;
        }
        else if (length_fast < length_second)
        {
            length_big = length_second;
            length_small = length_fast;
        }
        else
        {
            length_big = length_fast;
            length_small = length_fast;
        }

        for (int i = 0; i < length_small; i++)
        {
            printf("%c%c", fast[i], second[i]);
        }
        for (int j = length_small; j < length_big; j++)
        {

            if (fast[length_small] != '\0')
            {
                printf("%c", fast[j]);
            }
            else if (second[length_small] != '\0')
            {
                printf("%c", second[j]);
            }
        }
        printf("\n");
    }
    return 0;
}

*/