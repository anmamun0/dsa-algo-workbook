#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1010][1010];

ll KnapSack(int n, int weight [], int value[], ll w)
{
    if(n<0 || w==0)
    {
        return 0;
    } 
    if(dp[n][w] != -1)
        return dp[n][w];

    if(weight[n] <= w)
    {
        ll op1 = KnapSack(n - 1, weight, value, w - weight[n]) + value[n];
        ll op2 = KnapSack(n - 1, weight, value, w);
        return dp[n][w] =  max(op1, op2);
    }
    else
    {
        ll op2 = KnapSack(n - 1, weight, value, w);
        return dp[n][w] = op2;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll N, W;
        cin >> N >> W;

        int weight[N + 1], value[N + 1];

        for (int i = 0; i < N; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> value[i];
        }
        memset(dp, -1, sizeof(dp));
        cout << KnapSack(N - 1, weight, value, W) << endl;
        
    }

    return 0;
}