#include <bits/stdc++.h>
using namespace std;
// int dp[1005][1005];
bool subset_Bottom_top(int n,int mat[],int s)
{
    int dp[n + 1][s + 1];

    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <=s; j++)
        {
            if(mat[i-1] <=j)
            {
                bool op1 = dp[i - 1][j - mat[i - 1]];
                bool op2 = dp[i - 1][j];
                dp[i][j] = op1 or op2;
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    if(dp[n][s])
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int arr[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }



        if (sum % 2 == 0 and subset_Bottom_top(n, arr, sum / 2))
        {
                cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}