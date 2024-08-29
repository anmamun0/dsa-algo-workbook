#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int my_array[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&my_array[i]);
    }

    for(int i=n-1; i>=0;i--){
        printf("my_array[%d] = %d \n", i, my_array[i]);
    }
    return 0;
}