#include<stdio.h>
#include<float.h>
int main(){

    int N;
    scanf("%d", &N);

    for (int i = 1; i <=N; i++)
    {
        int D1, D2, M;
        scanf("%d %d %d", &D1, &D2, &M);
        // printf("%d %d %d \n", D1, D2, M);

        int cal = (D1*M) / (D1+D2);
        int less_time = M - cal;
        // float cal = 7 / 70;
        printf("%d\n" ,less_time);
    }
    
    return 0;
}