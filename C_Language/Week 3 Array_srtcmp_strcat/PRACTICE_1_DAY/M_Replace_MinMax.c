#include<stdio.h>
#include<limits.h>
 
int main(){
 
    int N;
    scanf("%d",&N);
 
    if(N>0){
 
        int array[N];
        for(int i=0; i<N;i++){
            scanf("%d",&array[i]);
        }
// This is minmux value :
        int min=array[0];
        for(int i = 0; i<N; i++){
            if(min>array[i]){
                min = array[i];   
            }
        }
 
// This is maximum value:
        int max = array[0];
        for(int i = 0; i<N; i++){
            if(max<array[i]){
                max = array[i];   
            }
        }
// printf("%d_ %d", max, min);
 
        for(int i=0; i<N;i++){
            if(max==array[i]){
                printf("%d ", min);
            }
            else if (min == array[i])
            {
                printf("%d ", max);
                
            }
            else{
                printf("%d ", array[i]);
            }
        }
 
    }
 
 
   
    return 0;
}