#include<stdio.h>
int main(){

    long long int a, b, chack;
    scanf("%lld %lld %lld", &a, &b, &chack);

    if (a % chack == 0 && b%chack==0){
        printf("Both");
    }
    else if(a % chack == 0){
        printf("Memo");
    }
    else if(b%chack ==0){
        printf("Momo");
    }
    else{
        printf("No One");
    }

        return 0;
}