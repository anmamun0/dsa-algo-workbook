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

    int x;
    scanf("%d", &x);

    int indexing[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &indexing[i]);
    }


     
    

    return 0;
}