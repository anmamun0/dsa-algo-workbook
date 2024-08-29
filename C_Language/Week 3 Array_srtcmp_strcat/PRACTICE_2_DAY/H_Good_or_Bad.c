#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    scanf("%d", &N);

    int chack = 0;
    while (N--)
    {
        char array[100001];
        scanf("%s", array);
        int count = 0;

        int limit_array = strlen(array);

        for (int i = 0; i < limit_array; i++)
        {
            if (array[i] == '0' && array[i + 1] == '1' && array[i + 2] == '0' || array[i] == '1' && array[i + 1] == '0' && array[i + 2] == '1')
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }

    return 0;
}