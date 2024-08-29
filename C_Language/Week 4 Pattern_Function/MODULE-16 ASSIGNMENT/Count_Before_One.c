#include<stdio.h>
int count_before_one(int a[],int N){
    int chack=N;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == 1){
            chack = i;
            break;
        }
    }
    
    return chack;

}

int main(){

    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    int j = count_before_one(array, N);
    printf("%d", j);

    return 0;
}