#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);

    int avg = strlen(s);
    // printf("%d", avg);

    for (int i = 0; i < avg; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            int value = s[i] + 32;
            printf("%c", value);
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            int value = s[i] - 32;
            printf("%c", value);
        }
        else{
            printf(" ");
        }
    }

    return 0;
}