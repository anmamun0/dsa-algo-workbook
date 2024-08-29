#include<stdio.h>
int main(){
/*
Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
*/
 
    long long int a,b,c;
    scanf("%lld %lld %lld",&a, &b, &c);

    if(a<b && a<c){
        printf("%lld", a);
    }
    else if (b<c && b<a)
    {
        long long int fast= (a-b)/2, last = c-b;
        if(fast < last){
          printf("%lld",b+fast);
        }
        else if(fast > last){
            printf("%lld",b+last);
        }
    }
    else if (c<a && c<b)
    {
        printf("%lld",c);
    }
    return 0;
}