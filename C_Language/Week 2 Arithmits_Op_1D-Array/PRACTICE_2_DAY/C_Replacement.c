#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);

    int array[N];
if(N>=2){
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&array[i]);
    }

    int convert_array[N];

    for (int i = 0; i < N; i++)
    {
        if(array[i]>0){
            convert_array[i]=1;

        }
        else if (array[i]==0)
        {
            convert_array[i]=0;
        }
        else{
            convert_array[i]=2;
        }
        
    }
    for (int i = 0; i <N; i++)
    {
        printf("%d ",convert_array[i]);
    }
    
} 
    



    return 0;
}