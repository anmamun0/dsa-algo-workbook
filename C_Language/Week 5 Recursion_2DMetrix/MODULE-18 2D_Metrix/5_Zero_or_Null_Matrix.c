#include<stdio.h>
int main(){

    int row, column;
    scanf("%d%d", &row, &column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column;j++){
            scanf("%d", &array[i][j]);
        }
    }
    int avg_elements = row * column;
    int chack = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column;j++){
            if(array[i][j]==0){
                chack++;
            }
        }
    }
    if(chack==avg_elements){
        printf("Zero Metrix");
    }
    else{
        printf("Not Zero Metrix");
    }

    return 0;
}