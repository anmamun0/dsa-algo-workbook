#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, W;
    cin >> n >> W;

    int weight[n], value[n];
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (weight[i - 1] <= j)
            {
                dp[i][j] = max(value[i - 1] + dp[i][j - weight[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][W] << endl;
    return 0;
}

/*
size = 4, CasheWeight = 6
weight  = 5 3 2 4
value   = 4 1 3 2
*/