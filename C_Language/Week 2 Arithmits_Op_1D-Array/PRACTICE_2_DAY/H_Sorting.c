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

        int avg=array[0];
        for(int i = 0; i<N; i++){
            if(avg>=array[i+1]){
                avg = array[i+1];
                
            }
        }
printf("_%d_",avg);

        int conv[N], next_var;
        for (int i = 0 ; i<N ;i++){
            if(avg<array[i]){
                
                
            }
        }











        // int mod_array[N], customize_Var=INT_MAX;
        // for(int i=0; i<N;i++){
        //     if(customize_Var<array[i]){
        //     continue;
        //     }
        //     customize_Var=array[i];
        // }

        // for(int i=0; i<N; i++){
        //     if(customize_Var<array[i]){
        //         printf("%d_", array[i]);
        //     }
        // }

        // for(int i=0 ; i<N; i++){
        //     printf("%d_",mod_array[i]);
        // }
// printf("%d",customize_Var);

        }








   
    return 0;
}