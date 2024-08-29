#include<stdio.h>
int main(){

    int x = 100;
    int *ptr = &x;

    printf("X   ar address - %p\n", &x);
    printf("ptr   ar value - %p\n", ptr);
    printf("ptr ar address - %p\n", &ptr);

    *ptr = 500;   //  x  =->=  *ptr
    printf("%d\n" ,x);
    return 0;
}