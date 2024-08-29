#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int M;
    scanf("%d", &M);
    for (int i = 0; i < N; i++)
    {
        int array[101];

        for (int i = 0; i < M; i++)
        {
            scanf("%d", &array[i]);
        }
        int k = 0;
        int j = M - 1;

        while (k < j)
        {
            int temp = array[k];                                       
            array[k] = array[j];
            array[j] = temp;
            k++;
            j--;
        }
    //  OUTPUT Section -------------------

        for (int i = 0; i < M; i++)
        {
            if(i==M-1){
                printf("%d", array[i]);
            }
            else{
                printf("%d ", array[i]);
            }
        }
        printf("\n");
    }
    return 0;
}