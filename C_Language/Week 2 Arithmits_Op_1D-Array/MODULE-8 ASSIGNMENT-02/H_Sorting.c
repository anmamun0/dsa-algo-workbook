#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &array[i]);
    }
// Finding the Maximam && Minimum value------------------------:
    // int max=array[0], min= array[0];
    // for (int i = 0; i < N; i++){
    //     if(array[i]>max){
    //         max=array[i];
    //     }
    //     if(array[i]< min){

    //         min=array[i];
    //     }
    // }
// printf("%d_ %d",max, min);------------------------------------:
    // printf("%d %d", array[0], array[1]);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}