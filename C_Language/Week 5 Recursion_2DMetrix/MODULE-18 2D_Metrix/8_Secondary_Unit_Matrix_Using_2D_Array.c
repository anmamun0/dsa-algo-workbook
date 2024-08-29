#include<stdio.h>
int main(){

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
    if(row!=column){
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(i+j == row-1){
                if(array[i][j]!=1){
                    flag = 0;
                }

            }
            else if(array[i][j]!=0){
                flag = 0;
            }
        }
    }
     if (flag == 1)
    {
        printf("Secondary Unit Diagonal\n");
    }
    else
    {
        printf("Not Secondary Unit Diagonal\n");
    }
    return 0;
}

// input:
// 0 0 0 1
// 0 0 1 0
// 0 1 0 0
// 1 0 0 0