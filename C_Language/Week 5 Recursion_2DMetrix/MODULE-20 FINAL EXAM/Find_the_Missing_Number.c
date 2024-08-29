#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int row = N, column = 4;
    long long int array[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%lld", &array[i][j]);                                                 
        }
    }
    for (int i = 0; i < row; i++)
    {
        long long int M = array[i][0];
        long long int abc = 1;

        for (int j = 1; j < column; j++)
        {
            abc *= array[i][j];
        }

        if (M == abc )
        {
            printf("1\n");
        }
        else if (M % abc != 0 || abc ==0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", M / abc);
        }
    }
    return 0;
}