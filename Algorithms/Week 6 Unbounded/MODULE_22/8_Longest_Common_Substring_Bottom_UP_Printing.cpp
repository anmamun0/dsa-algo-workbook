#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size();
    int dp[n + 1][m + 1];

    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=m; j++)
        {
            if(i==0 or j==0)
                dp[i][j] = 0;
        }
    }

    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    int mx_len = 0;
    int ci, cj = 0;

    for (int i = 0; i <=n; i++)
    {
        for (int j = 0;j<=m; j++)
        {
            cout << dp[i][j] << " ";

            //Tracking max substring length
            if(dp[i][j]>mx_len)
            {
                mx_len = dp[i][j];
                ci = i;
                cj = j;
            }

        }
        cout << endl;
    }

    string ans = "";
    while(ci!=0 and cj!=0)
    {
        if(a[ci-1] == b[cj-1])
        {
            ans += a[ci - 1];
            ci--;
            cj--;
        }
        else 
        {
            break;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}

/*
Input:
aceghr
acaeghbr

Output:
0 0 0 0 0 0 0 0 0 
0 1 0 1 0 0 0 0 0 
0 0 2 0 0 0 0 0 0 
0 0 0 0 1 0 0 0 0 
0 0 0 0 0 2 0 0 0 
0 0 0 0 0 0 3 0 0 
0 0 0 0 0 0 0 0 1 
egh


*/