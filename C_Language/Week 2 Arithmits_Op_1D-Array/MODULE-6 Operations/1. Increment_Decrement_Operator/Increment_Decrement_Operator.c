#include<stdio.h>
int main(){

// Postfix Increment------------------------

    int a,b;
    a = 10;
    b = a++;

    printf("a=%d \nb=%d",a,b);
    printf("\n\n\n\n");

// Prefix Increment------------------------
    int c, d;
    c= 10;
    d= ++c;

    printf("c=%d \nd=%d",c,d);
    
    return 0;
}