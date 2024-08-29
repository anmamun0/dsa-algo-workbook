#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int length, weight;
        scanf("%d %d", &length, &weight);
        if (length > 0 && weight > 0)
        {
            if (length == weight)
            {
                printf("Square\n");
            }
            else
            {
                printf("Rectangle\n");
            }
        }
    }

    return 0;
}