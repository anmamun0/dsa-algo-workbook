#include<stdio.h>
int fun(int x ){
    printf("fun  function x address - %p\n", &x);
}
int main(){

    int x = 10;
    printf("main function x address - %p\n", &x);
    fun(x);

    return 0;
}