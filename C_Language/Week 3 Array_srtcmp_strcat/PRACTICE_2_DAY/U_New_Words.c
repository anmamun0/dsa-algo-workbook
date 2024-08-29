#include <stdio.h>
#include <string.h>
int main()
{

    char str[1000001];
    scanf("%s", str);
    int length = strlen(str);

    int find_word_length = 5;
    int count[5];

    for (int i = 0; i < length; i++)
    {
        char j = str[i];
        if (j == 'E' || j == 'e')
        {
            count[0]++;
        }
        if (j == 'G' || j == 'g')
        {
            count[1]++;
        }
        if (j == 'Y' || j == 'y')
        {
            count[2]++;
        }
        if (j == 'P' || j == 'p')
        {
            count[3]++;
        }
        if (j == 'T' || j == 't')
        {
            count[4]++;
        }
    }
    int min = count[0];

    for (int i = 0; i < find_word_length; i++)
    {
        if (min > count[i])
        {
            min = count[i];
        }
    }
    printf("%d", min);

    return 0;
}