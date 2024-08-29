@AN.MAMUN
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int a, i=1;
    scanf("%lld", &a);
    
    for(i; i<=a;i++){
        if(i%3==0 && i%7==0){
            printf("%lld \n",i);
        }
    }
    return 0;
}
