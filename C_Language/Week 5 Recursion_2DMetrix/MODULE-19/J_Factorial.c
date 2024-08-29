#include<stdio.h>
long long int factorial(long long int n){
    if(n==0){
        return 1;
    }
    long long int count = factorial(n-1);
    return count * n;
}
int main(){

    long long int N;
    scanf("%lld", &N);
    long long int ans = factorial(N);
    printf("%lld", ans);
    return 0;
}