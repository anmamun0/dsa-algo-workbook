#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll T;
    cin >> T;
    while(T--)
    {
        ll N;
        cin >> N;
        vector<ll> ar;
        while(N--)
        {
            ll a;
            cin >> a;
            ar.push_back(a);
        }

        N = ar.size();
        sort(ar.begin(), ar.end());

        ll sum = 0; 
        for (ll i = 1; i < N; i++ )
        {
            sum += ar[i] - ar[i-1];
            
        }

        cout<<sum << endl;
    }

    return 0;
}