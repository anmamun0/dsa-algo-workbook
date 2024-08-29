#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
 
    char str[N + 1];
    scanf("%s", str);
 
    int count[26] = {0}; 
    for (int i = 0; i < N; i++)
    {
        int j = str[i] - 97;
        // printf("%c %d\n", j+97, j);
        count[j]++;
    }
    for (int i = 0; i < 26; i++) 
    {
        if (count[i] != 0)
        {
            for (int j = 0; j < count[i]; j++)
            {
                printf("%c", i + 97);
            }
        }
    } 
    return 0;
}

/*
-------------------------------------------------------------------------
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    char str[N+1];
    scanf("%s", str);
    

    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == str[j])
            {
                printf("%c", str[j]);
            }
        }
    }

    return 0;
}
*/