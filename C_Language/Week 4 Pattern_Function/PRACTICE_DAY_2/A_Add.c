#include<stdio.h>
void add(int x, int y){
    int sum = x + y;
    printf("%d", sum);
}
int main(){

    int x, y;
    scanf("%d %d", &x, &y);
    add(x, y);

    return 0;
}