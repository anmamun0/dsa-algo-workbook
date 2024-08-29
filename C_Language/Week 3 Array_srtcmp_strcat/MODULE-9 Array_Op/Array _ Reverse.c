#include<stdio.h>
int main(){

    int N;
    scanf("%d ", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &array[i]);
    }

    

    int i = 0, j = N - 1;

    while(i<j){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;
        j--;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    

    return 0;
}