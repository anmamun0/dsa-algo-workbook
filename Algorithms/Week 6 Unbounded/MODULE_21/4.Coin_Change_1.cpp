#include <bits/stdc++.h>
using namespace std;
// int unbounded_subset(int n, int value[], int s)
// {
//     if (n == 0)
//     {
//         if (s == 0)
//             return 1;
//         else
//             return 0;
//     }
//     if(dp[n][s] != -1)
//         return dp[n][s];

//     if (value[n - 1] <= s)
//     {
//         int op1 = unbounded_subset(n, value, s - value[n - 1]);
//         int op2 = unbounded_subset(n - 1, value, s);
//         return dp[n][s] =  op1 + op2;
//     }
//     else
//     {
//         int op2 = unbounded_subset(n - 1, value, s);
//         return dp[n][s] =  op2;
//     }
// }
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


    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (weight[i - 1] <= j)
            {
                dp[i][j] = dp[i][j - weight[i - 1]] + dp[i - 1][j];
            }

            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        } 
    }

    cout << dp[n][s] << endl;
    for (int i = 0; i <= n;i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << "  ";
        }
        cout << endl;
    }
        return 0;
}