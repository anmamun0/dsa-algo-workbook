#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();

    int dp[n + 1][m + 1];

    for (int i = 0; i<=n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if(i == 0 || j==0 )
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                int op1 = dp[i - 1][j];
                int op2 = dp[i][j - 1];
                dp[i][j] = max(op1, op2);
            }
        }
    }

    cout << dp[n][m] << endl;

    int i = n;
    int j = m;

    string ans;

    while(i!=0 and j!=0)
    {
        if(a[i-1] == b[j-1])
        {
            ans += a[i - 1];
            i--;
            j--;
        }
        else
        {
            if(dp[i][j-1] > dp[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;

    return 0;
}

/*
input:
abd
gbad

output:
2
ad



intput:
adegf
abdef

output:->>
4
adef


inpout:
abccdgceg
azbaccgef

output:
6
abccage

*/