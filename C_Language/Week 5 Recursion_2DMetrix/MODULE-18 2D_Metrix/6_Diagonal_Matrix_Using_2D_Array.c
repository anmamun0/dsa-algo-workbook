#include <stdio.h>
int main()
{

    int row, column;
    scanf("%d%d", &row, &column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int flag = 1;
    if (row != column)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (array[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }
// input:
// 1 0 0 0
// 0 6 0 0
// 0 0 2 0
// 0 0 0 9
    return 0;
}