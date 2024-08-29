#include <bits/stdc++.h>
using namespace std;

int knapStack(int n,int weight[], int value[],int W)
{
    if(n<0 || W ==0)
    {
        return 0;
    }
    if(dp[n][W] != -1)
        return dp[n][W];

    if(weight[n] <= W)
    {
        int op1 = knapStack(n - 1, weight, value, W - weight[n]) + value[n];
        int op2 = knapStack(n - 1, weight, value, W);
        return dp[n][W] = max(op1, op2);
    }
    else
    {
        int op2 = knapStack(n - 1, weight, value, W);
        return dp[n][W] = op2;
    }
}
int main()
{
    int n;
    cin >> n;

    int weight[n + 1], value[n + 1];

    for(int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int W;
    cin >> W;

    int dp[n + 1][W + 1];

    for (int i = 0; i <= n;i++)
    {
        for (int j = 0; j <= W;j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= W; j++)
        {

        }
    }

        return 0;
}