#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n + 1], s = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }

        int DP[n + 1][s + 1];

        DP[0][0] = true;
        for (int i = 1; i <= s; i++)
        {
            DP[0][i] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                {
                    bool op1 = DP[i - 1][j - a[i - 1]];
                    bool op2 = DP[i - 1][j];
                    DP[i][j] = op1 or op2;
                }
                else
                    DP[i][j] = DP[i - 1][j];
            }
        }

        if ((s % 2 == 0) && DP[n][s/2])
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