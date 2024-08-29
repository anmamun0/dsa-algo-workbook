#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int store;

    int two_div = 0, three_div = 0;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d ", &store);
        // printf("%d ", store);

        if (store % 2 == 0 && store % 3 == 0)
        {
            two_div++;
        }
        else if (store % 2 == 0)
        {
            two_div++;
        }
        else if (store % 3 == 0)
        {
            three_div++;
        }
    }
    printf("%d %d", two_div, three_div);

    return 0;
}