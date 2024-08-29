#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];

bool subset(int n,int mat[], int s)
{
    if(n==0 )
    {
        if(s==0)
            return true;
        else
            return false;
    }
    if(dp[n][s] != -1)
        return dp[n][s];
        
    if(mat[n-1] <=s )
    {
        bool op1 = subset(n - 1, mat, s - mat[n - 1]);
        bool op2 = subset(n - 1, mat, s);
        return dp[n][s] = op1 or op2;
    }
    else
    {
        bool op2 = subset(n - 1, mat, s);
        return dp[n][s] = op2;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, Marks;
        cin >> n >> Marks;

        int mat[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> mat[i];
        }

        int I_need = 1000 - Marks;
        
        if(I_need==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            memset(dp, -1, sizeof(dp));

            if(subset(n,mat,I_need))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }
    }

    return 0;
}