#include<stdio.h>
int main(){

    int array[5]={10,20,30,40,50};
    // printf("array[0] -> %p\n", & array[0]);
    // printf("array[0] -> %p\n", & array);

    // printf("array[0] -> %d\n", array[0]);
    // printf("array[0] -> %d\n", *array);

    printf("1st indexa ar value - %d\n", array[1]);
    printf("1st indexa ar value - %d\n", *(array+1));

    printf("%d\n", *(array + 1));
    printf("%d\n", array[1]);


    printf("%d\n", *(1+ array));
    printf("%d\n", 1[array]);

    //1[array] converting -> *(1+array)
    //array[1] converting -> *(array+1)
    // So that , array work like that pointer ,

    return 0;
}