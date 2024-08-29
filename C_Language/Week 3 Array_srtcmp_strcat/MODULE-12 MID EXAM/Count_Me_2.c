#include <stdio.h>
#include <string.h>
int main()
{

    char str[100001];
    scanf("%s", str);
    // printf("%s ", str);
    int lenth = strlen(str);

    int voule = 0;

    for (int i = 0; i < lenth; i++)
    {
        // printf("%c ", str[i]);
        char j = str[i];
        if (j == 'a' || j == 'e' || j == 'i' || j == 'o' || j == 'u')
        {
            // printf("%c ", j);
            voule++;
        }
    }
    int consonent = lenth - voule;
    printf("%d\n", consonent);

    return 0;
}