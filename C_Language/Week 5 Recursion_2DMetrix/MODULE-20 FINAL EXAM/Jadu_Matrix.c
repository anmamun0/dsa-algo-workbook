#include <stdio.h>
int main()
{

    int N, M;
    scanf("%d %d", &N, &M);

    int array[N][M];
    if (N == M)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                scanf("%d", &array[i][j]);
            }
        }
        int flag = 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if ((i == j && array[i][j] != 1) || (i + j == N - 1 && array[i][j] != 1))
                {
                    flag = 0;
                    break;
                }
                else if (i != j && i + j != N - 1)
                {
                    if (array[i][j] != 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }

        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}