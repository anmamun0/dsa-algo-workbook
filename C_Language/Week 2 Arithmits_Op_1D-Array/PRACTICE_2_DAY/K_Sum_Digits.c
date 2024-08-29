#include<stdio.h>
#include <math.h>
int main(){

    int N;
    scanf("%d", &N);
    int value;
    scanf("%d", &value);



    int array[N];
    int j = 0;
    for (int i = N - 1; i < 1; i++)
    {
        int avg = value / pow(10, i);
        printf("%d ", avg);
        // array[j] = avg;
        // value = value- avg*pow(10, i);
        // j++;
    }
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%d ", array[i]);
    // }

        return 0;
}