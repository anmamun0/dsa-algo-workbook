#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int my_array[n];
    for(int i=0; i<n;i++){
        scanf("%d",&my_array[i]);
    }

    int sum=0;
    for(int i=0; i<n;i++){
        sum+= my_array[i];
        printf("%d ",my_array[i]);
    }
    printf("\nThe calculation of addition= %d",sum);
    

    return 0;
}