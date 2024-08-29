#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    char str[N];
    scanf("%s", str);

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int ans = str[i] - 48;
        sum += ans;
    }
    printf("%d", sum);

    return 0;
}