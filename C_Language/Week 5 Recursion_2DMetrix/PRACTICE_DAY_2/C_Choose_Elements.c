#include<stdio.h>
int main(){

    int N, K;
    scanf("%d %d", &N, &K);

    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        
    }
    long long int eqal = 0;
    for (int i = 0; i < K; i++)
    {
        if(array[i]< 0){
            break;
        }
        else{
            eqal += array[i];

        }
    }

    printf("%lld", eqal);

    return 0;
}