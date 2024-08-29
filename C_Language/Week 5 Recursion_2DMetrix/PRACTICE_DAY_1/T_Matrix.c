#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    int row = N, column = N;

    int array[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++){
            scanf("%d", &array[i][j]);
        }
    }
    int pri = 0, sec = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++){
            if(i==j){
                pri += array[i][j];
            }
            if(i+j == row-1){
                sec += array[i][j];
            }
        }
    }
    
    // if(pri<0){
    //     pri *= -1;
    // }
    // if(sec<0){
    //     sec *= -1;
    // }
    int sumation = pri - sec;
    if(sumation<0){
        sumation *= -1;
    }
    printf("%d",sumation);

    return 0;
}