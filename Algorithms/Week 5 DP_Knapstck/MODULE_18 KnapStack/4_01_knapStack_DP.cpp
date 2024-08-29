#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
const int maxM = 1000;
int dp[maxN][maxM];

int knapsack(int n, int weight[], int value[] ,int W)
{
    if(n<0 || W==0)
        return 0;
    if(dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if(weight[n] <= W)
    {
        int op1 = knapsack(n - 1, weight, value, W - weight[n]) + value[n];
        int op2 = knapsack(n - 1, weight, value, W);
        return dp[n][W] =  max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n - 1, weight, value, W);
        return dp[n][W] = op2;
    }
    
}
int main()
{
    int N;
    cin >> N;
    int weight[N], value[N];

    for (int i = 0; i < N; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> value[i];
    }
    int W;
    cin >> W;
 
    for (int i = 0; i <= N;i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }

        cout << knapsack(N - 1, weight, value, W);

    return 0;
}

/*
input:
4
2 3 4 5
1 3 5 3
8

output:
8
*/