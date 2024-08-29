#include <bits/stdc++.h>
#define ll long long
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    vector<ll> v(t);
    for (ll i = 0; i < t;i++)
    {
        cin >> v[i];
    }
    sort(v);

    cout << v[0] + v[1] << '\n';

    return 0;
}