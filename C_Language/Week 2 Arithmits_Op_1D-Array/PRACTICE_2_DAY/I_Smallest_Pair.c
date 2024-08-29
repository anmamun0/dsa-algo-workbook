#include <stdio.h>
#include <limits.h>
int main()
{
    int i, j, N;
    scanf("%d", &i);
    scanf("%d", &j);

    if (i >= 1 && j > i)
    {
        int my_array[j];
        for (int m = 0; m < j; m++)
        {
            scanf("%d", &my_array[m]);
        }

        long long int min = LLONG_MAX;
        int count = 0;
        long long int pair_array[count];

        for (int x = 0; x < j; x++)
        {
            for (int y = x + 1; y <= j - 1; y++)
            {
                long long avg = my_array[x] + my_array[y] + y - x;

                if(avg<min){
                    min = avg;
                }
            }
        }
        printf("%lld\n", min);
    }
    return 0;
}

/*
#include <stdio.h>
#include <limits.h>
    int
    main()
{
    int i, j, N;
    scanf("%d", &i);
    scanf("%d", &j);

    if (i >= 1 && j > i)
    {
        int my_array[j];
        for (int m = 0; m < j; m++)
        {
            scanf("%d", &my_array[m]);
        }

        long long int avg = 0;
        int count = 0;
        long long int pair_array[count];

        for (int x = 0; x < j; x++)
        {
            for (int y = x + 1; y <= j - 1; y++)
            {
                avg = my_array[x] + my_array[y] + y - x;              

                pair_array[count] = avg;
                count += 1;
            }
        }

        long long int min = pair_array[0];
        for (int i = 0; i < count; i++)
        {
            if (min > pair_array[i])
            {
                min = pair_array[i];
            }
        }
        printf("%lld", min);
    }
    return 0;
}
*/