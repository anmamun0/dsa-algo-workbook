#include<stdio.h>
#include<string.h>
int main(){

    char S[1001], T[1001];
    scanf("%s %s", S,T);
    // scanf("%s", T);

    int S_length = strlen(S), T_length = strlen(T);

    printf("%d %d\n", S_length, T_length);
    printf("%s %s", S, T);

    return 0;
}