#include<stdio.h>
#include<string.h>
int main(){

    char A[11], B[11];
    scanf("%s %s", A, B);

    int fast = strlen(A), last = strlen(B);
    printf("%d %d\n", fast, last);

    printf("%s%s\n", A, B);

    char temp_fast = A[0];
    A[0] = B[0];
    B[0] = temp_fast;

    printf("%s %s\n", A, B);

    return 0;
}