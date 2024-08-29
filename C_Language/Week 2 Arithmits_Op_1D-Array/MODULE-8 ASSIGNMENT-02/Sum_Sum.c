#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
if(1<=N){
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &array[i]);
    }

    int possitive_Num=0 , Negative_Num=0;
    for (int i = 0; i < N; i++)
    {
        int avg = array[i];
        if(avg>0){
            possitive_Num+= avg;

        }
        else{
            Negative_Num += avg;
        }

    }
    printf("%d %d", possitive_Num, Negative_Num);
    
}
    return 0;
}