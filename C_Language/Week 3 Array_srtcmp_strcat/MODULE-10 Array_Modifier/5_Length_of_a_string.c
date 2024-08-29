#include<stdio.h>
#include<string.h>
int main(){

    char a[100];
    scanf("%s", a);
    // fgets(a, 14, stdin);
    int count = 0;
    int st = strlen(a);
    printf("%d\n", st);

    // for (int i = 0; a[i]!='\0'; i++)
    // {
    //     count++; /* code */
    // }
    // printf("%d\n",count);

    return 0;
}