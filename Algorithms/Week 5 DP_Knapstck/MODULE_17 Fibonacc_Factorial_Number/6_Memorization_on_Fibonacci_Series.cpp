#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const ll H = 1e6 + 10;
ll dp[H];

ll fibo(ll n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }

    ll ans= fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return ans;
}

int main()
{
    //finding fibonacci series of index value
    // 0 1 2 3 4 5 6  7  8   9   10
    // 0 1 1 2 3 5 8  13 21  34  55  89

    // complexity O(2*N); o my god !!
    memset(dp, -1, sizeof(dp));

    cout << fibo(50) << endl;

    return 0;
}