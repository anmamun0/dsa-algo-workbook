#include<stdio.h>
void short_Num(int x[],int n){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n; j++){
            if(x[i]>x[j]){
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    
    for (int i = 0; i <n; i++)
    {
        printf("%d\n", x[i]);
    }  
}
    
int main(){

    int array[3];
    scanf("%d %d %d",  &array[0],&array[1],&array[2]);

    int A = array[0], B = array[1], C = array[2];

    short_Num(array,3);

    printf("\n%d\n%d\n%d", A, B, C);
    return 0;
}