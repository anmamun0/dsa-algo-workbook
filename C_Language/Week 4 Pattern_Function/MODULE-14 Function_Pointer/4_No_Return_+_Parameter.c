#include<stdio.h>

void sum(int x, int y){
    int s = x + y;
    printf("%d", s);
    // void function don't exit return, 
}
int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}