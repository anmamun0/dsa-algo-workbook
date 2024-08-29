#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(NULL);

    ll n, power;
    cin >> n >> power;

    vector<ll> v(n);
    ll mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    ll maonster = mx*(mx-1)/2;

    maonster >= power ? cout << "Dablu\n" : cout << "Hablu\n";

    return 0;
}


