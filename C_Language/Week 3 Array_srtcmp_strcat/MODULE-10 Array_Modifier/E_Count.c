#include<stdio.h>
#include<string.h>
int main(){

    char s[1000001];
    scanf("%s", s);
    // fgets(s,1000001, stdin);

    int sum = 0;
    for (int i = 0; i<strlen(s); i++)
    {
        int avg = s[i] - 48;
        sum += avg;
    }
    // printf("%c");
    printf("%d\n", sum);
    return 0;
}