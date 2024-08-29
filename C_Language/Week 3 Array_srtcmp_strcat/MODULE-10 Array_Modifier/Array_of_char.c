#include<stdio.h>
int main(){

    // char a[5];
    // for (int  i = 0; i < 5; i++)
    // {
    //     scanf("%c", &a[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", a[i]);
    // }

    int array[5];
    printf("%d\n", sizeof(array));
    printf("Array size = %d\n", sizeof(array)/4);

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long long int));

    return 0;
}