
#include<stdio.h>
int main(){
    
    int N ,Binarry_count;
    scanf("%d %d",& N,&Binarry_count);

// Take a number and storaged in array------------------:
    int array[N];
    for(int i=0; i<N;i++)
    {
        scanf("%d",&array[i]);
    }
// Take a number for search this-----------------------:
    for (int i = 1; i <= Binarry_count; i++)
    
    {   int found=0;
        int chack;
        scanf("%d", &chack);

        for (int i = 0; i < N; i++)
        {
            if(chack==array[i]){
                printf("found\n");
                found =1;
                break;
            }  
        }
        if(!found)
        {
        printf("not found\n");
        }
    }
    return 0;
}