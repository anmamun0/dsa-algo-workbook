#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
bool subset_sum(int n, int a[], int s)
{
    if(n==0)
    {
        if(s==0)
            return true;
        else
            return false;
    }
    if(dp[n][s] != -1)
        return dp[n][s];

    if(a[n-1] <=s)
    {
        return dp[n][s] = (subset_sum(n - 1, a, s - a[n - 1]) || subset_sum(n - 1, a, s));
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 2 == 0)
    {
        memset(dp, -1, sizeof(dp));

        if(subset_sum(n, a, sum / 2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

    return 0;
}
/*
4
1 4 9 4

3
1 10 7


{1,4,4}, {9}
*/