#include <stdio.h>
long long int my_recursion(int a[], int N)
{
    if (N < 0)
        return 0;
    long long int result = my_recursion(a, N - 1);

    return result + a[N];
}
int main()
{

    int N;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    long long int ans = my_recursion(array, N - 1);
    printf("%lld", ans);
    return 0;
}