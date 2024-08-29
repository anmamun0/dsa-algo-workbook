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
    int n, W;
    cin >> n >> W;

    int weight[n], value[n];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    cout << unbounded_Knapsack(n, weight, value, W);
    return 0;
}

/*
size = 4, CasheWeight = 6
weight  = 5 3 2 4
value   = 4 1 3 2
*/