#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n;i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if(a[i-1] <=j)
                dp[i][j] = (dp[i-1][j - a[n - 1]]) || (dp[i-1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    vector<int> v;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if(dp[i][j])
                v.push_back(j);
        }
    }

    int ans = INT_MAX;

    for(int val :v)
    {
        int s1 = val;
        int s2 = s - s1;

        ans = min(ans, abs(s1 - s2));
    }

    cout << ans << endl;

    return 0;
}

/**
 1 5 4 11
{1,11} - {5,4} = 3
{1,5,4} - {11} = 1 its a minimus set sifferences

*/