#include<stdio.h>
#include<string.h>
int main(){

    char a[100], b[100];
    scanf("%s %s", a, b);

    int v = strcmp(a, b);

    if (v < 0){
        printf("a small");
    }
    if (v > 0){
        printf("b small");
    }
    if (v == 0){
        printf("same");
    }

        return 0;
}
/*
'strmp' function take output 3 number;
input: a b variable

-1 = a small
0 = same
1 = b small

*/