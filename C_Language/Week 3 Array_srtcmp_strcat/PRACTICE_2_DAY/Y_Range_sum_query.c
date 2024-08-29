#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int array[100005];
    int k = 0;
    while (N--)
    {
        scanf("%d", &array[k]);
        k++;
    }
    while (M--)
    {
        int x, y, sum = 0;
        scanf("%d %d", &x, &y);

        for (int i = x - 1; i < y; i++)
        {
            sum += array[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}