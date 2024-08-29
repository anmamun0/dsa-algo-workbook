#include<stdio.h>
int sum1(){
    int x = 20;
    int y = 55;
    int s = x + y;
    return s;
}

int sum2(void){
    int x = 20, y = 55;
    return x + y;
}


int main(){

    printf("%d", sum1(23));
    return 0;
}