#include <stdio.h>
void my_recertion(int n)
{
    if (n == 0)
        return;
    if (n != 1)
    {
        printf("I love Recursion\n");
    }
    else
    {
        printf("I love Recursion");
    }
    my_recertion(n - 1);
}
int main()
{

    int N;
    scanf("%d", &N);
    my_recertion(N);
    return 0;
}