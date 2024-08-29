#include <stdio.h>
#include <string.h>
int main()
{

    int N;
    scanf("%d", &N);

    char str[10001];

    int digit = 0,  cap_apl = 0,    small_alp = 0;

    for (int i = 1; i <= N; i++)
    {
        scanf("%s", str);
        // printf("%s\n", str);

        int limit_str = strlen(str);

        for (int i = 0; i < limit_str; i++)
        {
            int j = str[i];
            if (j > 47 && j < 58)
            {
                digit += 1;
            }
            else if (j > 64 && j < 91)
            {
                cap_apl += 1;
            }
            else
            {
                small_alp += 1;
            }
        }
        printf("%d %d %d\n", cap_apl, small_alp, digit);

        digit = 0,  cap_apl = 0,    small_alp = 0;
    }

    return 0;
}