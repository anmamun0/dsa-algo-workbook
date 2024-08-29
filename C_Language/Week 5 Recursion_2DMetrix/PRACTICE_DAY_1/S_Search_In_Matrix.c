#include <stdio.h>
int main()
{

    int N, M;
    scanf("%d%d", &N, &M);

    int array[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)                                               
        {
            scanf("%d", &array[i][j]);
        }
    }
    int match, chack = 0;
    scanf("%d", &match);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (match == array[i][j])
            {
                chack = 1;
                break;
            }

        }
    }
    if (chack == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}