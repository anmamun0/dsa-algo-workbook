#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dp[100010];

bool find(ll i, ll N)
{
    if(i>N)
        return false;
    if(i==N)
        return true;
    if(i>INT_MAX or i==INT_MAX)
        return false;

    if(dp[i] != -1)
        return dp[i];

    bool add = find(i + 3, N);
    bool mul = find(i * 2, N);

    return dp[i] = (add or mul);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll N;
        cin >> N;
        memset(dp, -1, sizeof(dp));

        if(find(1,N))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    
    return 0;
}