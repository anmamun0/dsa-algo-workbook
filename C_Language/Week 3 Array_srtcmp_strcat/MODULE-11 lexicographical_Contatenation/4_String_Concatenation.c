#include <stdio.h>
#include <string.h>
int main()
{

    char a[200], b[100];
    scanf("%s %s", a, b);

    int a_len = strlen(a);
    int b_len = strlen(b);


    // printf("%d", c);

    for (int i = 0; i <= b_len; i++)
    {
        a[a_len] = b[i];
        a_len++;
    }
    printf("%s  %s", a,b);
    return 0;
}