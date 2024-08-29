#include<stdio.h>
int main(){

// Inpute array size section:--------------------
    int N;
    scanf("%d", &N);

// Input array elements section:--------------------
    int array[N];
    for (int i = 0; i < N;i++){
        scanf("%d", &array[i]);
        // printf("%d_ ", array[i]);
    }

// Input Deleting Position index --  ------------
    int pos;
    scanf("%d", &pos);


    for (int i = pos; i < N-1; i++)
    {
        array[i] = array[i + 1];
    }

// Output  modifi array--------------
    for (int i = 0; i < N-1 ; i++)
    {
        printf("%d ", array[i]);
    }
    
    


    return 0;
}