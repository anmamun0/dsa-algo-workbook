#include<stdio.h>
int main(){

    char a , b;
    scanf("%c ",&a);


    if (a>=92 && a<=122){
        int b= a-32;
        printf("%c",b);
    }
    else if(a>=65){
        int b= a+32;
        printf("%c",b);
    }


    return 0;
}