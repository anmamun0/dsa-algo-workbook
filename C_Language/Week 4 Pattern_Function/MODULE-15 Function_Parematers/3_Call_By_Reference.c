#include<stdio.h>
void fun(int *ptr){
    printf("main er x er value -%p\n", ptr);
    *ptr = 500;
}
int main(){

    int x = 100;
    printf("main er x er value -%p\n", &x);
    printf("main %d\n", x);

    fun(&x);
    printf("main %d\n", x);
    return 0;
}