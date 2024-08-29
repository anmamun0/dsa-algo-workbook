#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }



    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if(array[i]>array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    
    
    return 0;
}