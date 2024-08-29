#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    int s;
    cin >> s;

    int dp[n + 1][s + 1];
    dp[0][0] = 0;

    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = INT_MAX-1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j<=s; j++)
        {
            if(weight[i-1] <=j)
            {
                dp[i][j] = min(dp[i][j - weight[i - 1]] + 1, dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][s] << endl;
    return 0;
}

/*
3
1 2 3
5

output:
2

Explanation ->
2+3 = 5
2+2+1 =5 ;
1+1+1+2 = 5;
1+1+1+1+1 = 5;

here is minimun coin is 2 (2,3) , i can make 5 with 2 coin;
*/