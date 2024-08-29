#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll row, clm;
ll arr[100][100];
ll maximum_path(ll n, ll m)
{
    if (n == row - 1 and m == clm - 1)
    {
        return arr[n][m];
    }
    if(n>row-1 || m>clm-1)
    {
        return INT_MIN;

    }
    ll op1 = maximum_path(n + 1, m);
    ll op2 = maximum_path(n, m + 1);

    return arr[n][m] + max(op1, op2);
}
int main()
{
    ll n, m;
    cin >> n >> m;
    row = n;
    clm = m;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << maximum_path(0, 0) << endl;

    return 0;
}