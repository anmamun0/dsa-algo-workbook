#include<stdio.h>
int main(){
    int x = 100;
    int *addr = &x;

    printf("%d = %p\n", x, &x);

    printf("%p\n", addr);

    //dereference
    printf("%d\n", *addr);

    // fake wise value change with dereference; 
    //"  *addr  " ja kota, "  x  " aki kota ;
    *addr = 500;

    printf("%d", x);
    return 0;
}