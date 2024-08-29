#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);

    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    int chack = array[0];
    for (int i = 0; i < N; i++)
    {
        if(array[i]<chack){
            chack = array[i];
        }
    }
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        if(array[i]==chack){
            flag++;
        }
    }
    if(flag%2==0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
    

    return 0;
}