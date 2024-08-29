#include<stdio.h>
#include<stdlib.h>
void positive(int x){
    printf("%d", abs(x));
}
int main(){

    int num;
    scanf("%d", &num);
    
    positive(num);
    return 0;
}