#include<stdio.h>
int main(){

// Inpute array size section:--------------------
    int N;
    scanf("%d", &N);

// Input array elements section:--------------------
    int array[N + 1];
    for (int i = 0; i < N;i++){
        scanf("%d", &array[i]);
        // printf("%d_ ", array[i]);
    }
// Input adding array position and which value insert ------------

    int pos, index_var;
    scanf("%d", &pos);
    scanf("%d", &index_var);

// Shifting array possition------------------
    for (int i = N; i >= pos+1; i--){
        array[i]= array[i-1];
    }

// Inserting valu in array-----------------
    array[pos] = index_var;

// Printing modifying array-----------
    for (int i = 0; i <=N; i++)
    {
        printf("%d ", array[i]);
    }


        return 0;
}