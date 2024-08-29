#include<stdio.h>
int main(){

    char X;
    scanf("%c", &X);
    if(X>47 && X<58){
        printf("IS DIGIT \n");
    }
    else{
        printf("ALPHA\n");

        if(X>=65 && X<=90){
            printf("IS CAPITAL \n");
        }
        else{
            printf("IS SMALL \n");
        }
    }
    return 0;
}