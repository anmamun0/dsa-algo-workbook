#include <bits/stdc++.h>
using namespace std;
const int maxN = 1050;
const int maxM = 1050;
int dp[maxN][maxM];

int knapsack(int n, vector<int> weight, vector<int> value ,int W)
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
    int n,W;
    cin >> n >> W;
    vector<int> weight;
    vector<int> value;

    for (int i = 0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        weight.push_back(a);
        value.push_back(b);
    }

    memset(dp, -1, sizeof(dp));

    cout << knapsack(n - 1, weight,value,W) << endl;
    

    return 0;
}