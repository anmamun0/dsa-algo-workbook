#include<stdio.h>
int main(){
 
    int row, column;
    scanf("%d%d", &row, &column);
 
    int A[row][column];
    int B[row][column];
    int C[row][column];
 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++){
            scanf("%d", &B[i][j]);
        }
    }   
 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}