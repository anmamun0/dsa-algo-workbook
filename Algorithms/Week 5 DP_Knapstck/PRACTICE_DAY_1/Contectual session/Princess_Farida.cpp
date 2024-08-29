#include <bits/stdc++.h>
using namespace std;
int dp[10005];

int maimaxCollect(int n, int arr[])
{
    if(n<0)
        return 0;
    
    if(dp[n] != -1)
        return dp[n];

    int op1 = maimaxCollect(n-2, arr) + arr[n];
    int op2 = maimaxCollect(n - 1, arr);
    return dp[n] =  max(op1, op2);
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k<=t; k++)
    {
        int N;
        cin >> N;

        int arr[N + 1];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        memset(dp, -1, sizeof(dp));
        cout <<"Case "<<k<<": `"<< maimaxCollect(N-1, arr) << endl;
        
    }

    return 0;
}