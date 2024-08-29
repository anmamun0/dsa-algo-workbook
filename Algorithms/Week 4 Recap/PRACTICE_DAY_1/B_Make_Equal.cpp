#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        vector<ll> water(N);
        ll totalWater = 0;
        for (ll i = 0; i < N; i++)
        {
            cin >> water[i];
            totalWater += water[i];
        }

        if (totalWater % N != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        ll avgWater = totalWater / N;
        set<ll> drank;
        for (ll i = 0; i < N; i++)
        {
            if (water[i] > avgWater)
            {
                drank.insert(i);
            }
        }

        bool possible = true;
        for (ll i = 0; i < N; i++)
        {
            if (water[i] < avgWater)
            {
                if (!drank.empty())
                {
                    ll j = *drank.begin();
                    ll needed = avgWater - water[i];
                    ll actual = water[j] - avgWater;
                    if (actual >= needed)
                    {
                        water[i] += needed;
                        water[j] -= needed;
                        if (water[j] == avgWater)
                            drank.erase(j);
                        else
                            drank.insert(j);
                    }
                    else
                    {
                        water[i] += actual;
                        water[j] -= actual;
                        if (water[j] == avgWater)
                            drank.erase(j);
                        else
                            drank.insert(j);
                        i--;
                    }
                }
                else
                {
                    possible = false;
                    break;
                }
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}