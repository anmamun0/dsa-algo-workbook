#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0) return 1;
        else return 0;
    }

    if(dp[n][s] != -1)  return dp[n][s];

    if (a[n - 1] <= s)
    {
        int op1 = subset_sum(n - 1, a, s - a[n-1]);
        int op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 + op2;
    }
    else
    {
        return dp[n][s] =  subset_sum(n - 1, a, s);
    }
}
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s;
    cin >> s;
    memset(dp, -1, sizeof(dp));

    cout << subset_sum(n, a, s);
    
    return 0;
}

/*
4
1 2 4 6
7
*/