#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    int x;
    scanf("%d", &x);
    int chack = 0;

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (array[i] + array[j] == x)
            {
                chack= 1;
            }
        }
    }
    if (chack==0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}