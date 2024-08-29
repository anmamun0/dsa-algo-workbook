#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int unbounded_Knapsack(int n, int weight[], int value[], int w)
{
    if (n == 0 || w == 0)
        return 0;
    if(dp[n][w] != -1 )
        return dp[n][w];

    if (weight[n - 1] <= w)
    {
        int ch1 = value[n - 1] + unbounded_Knapsack(n, weight, value, w - weight[n - 1]);
        int ch2 = unbounded_Knapsack(n - 1, weight, value, w);
        return dp[n][w]= max(ch1, ch2);
    }
    else
    {
        int ch2 = unbounded_Knapsack(n - 1, weight, value, w);
        return dp[n][w]= ch2;
    }
}
int main()
{
    int n;
    cin >> n;

    int val[n], w[n];

    for (int i = 0;i <n; i++)
    {
        cin >> val[i];
        w[i] = i + 1;
    }

    memset(dp, -1, sizeof(dp));

    cout << unbounded_Knapsack(n, w, val, n);

    return 0;
}

/*
intput:
8
2 4 4 5 8 10 12 9

output:
16
*/