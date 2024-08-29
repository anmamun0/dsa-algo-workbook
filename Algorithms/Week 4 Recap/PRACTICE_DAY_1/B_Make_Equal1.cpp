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
        vector<ll> water;
        
        for (ll i = 0; i < N;i++)
        {
            ll a;
            cin >> a;
            water.push_back(a);
        }
 
        ll total = accumulate(water.begin(), water.end(),1)/N;
 
        for (ll i = 0; i < N; i++)
        {
            if(water[i] > total)
            {
                for (ll j = i + 1; j < N;j++)
                {
                    if(water[j]<total)
                    {
                        ll a = water[i]-total;
                        water[i] -= a;
                        water[j] += a;
                    }
                }
            }
        }
        set<ll> drank(water.begin(), water.end());
 
        if(drank.size() == 1)
        {
            cout << "YES" << endl;
            
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}