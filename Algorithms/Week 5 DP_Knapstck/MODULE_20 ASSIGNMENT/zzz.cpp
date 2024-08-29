#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<ll> hight;
        int n;
        cin >> n;

        map<int, pair<int,char>> mp;

        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            hight.push_back(a);

            if(mp[a].second != 'L' and  mp[a].second != 'L'  )
            {
                if(i<n/2)
                    mp.insert({a, {i,'L'}});
                else
                    mp.insert({a, {i, 'R'}});
            }
        }
        

        sort(hight.begin(), hight.end());

        int f = hight[hight.size() - 1];
        int s = hight[hight.size() - 2];


        if(mp[f].second == 'L')
            cout << mp[f].first << " " << mp[s].first << endl;
        else
            cout << mp[s].first << " " << mp[f].first << endl;
    }

    return 0;
}