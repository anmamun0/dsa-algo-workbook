#include <stdio.h>
int main()
{

    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {   int N;
        scanf("%d", &N);
        
        int array[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &array[i]);
        }
        
        int X;
        scanf("%d", &X);

        int store = 0;
        for (int i = 0; i < N; i++)
        {
            if (array[i] == X)
            {
                store = 1;
                break;
            }
        }
        if (!store)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}