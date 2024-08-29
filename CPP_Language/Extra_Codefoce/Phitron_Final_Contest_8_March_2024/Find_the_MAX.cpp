#include <bits/stdc++.h>
#define ll long long
#define pair pair<int,int>
#define sort(v) sort(v.begin(), v.end())
using namespace std;
class cmp2
{
    public:
    bool operator()(pair a, pair b)
    {
       if(a.second == b.second)
           a.first < b.first;
       return a.second < b.second;
    }
};

int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    priority_queue<pair,vector<pair> ,cmp2> pq;
    map<int, int> mp;

    while(t--)
    {
        int promt;
        cin >> promt;

        if(promt==1)
        {
            ll val;
            cin >> val;
            mp[val]++;
        }

        else if(promt==2)
        {
            for(auto c:mp)
            {
                if(c.second >=1)
                    pq.push(c);
            }

            // if (!pq.empty())
            // {
                pair data = pq.top();
                cout << data.first << '\n';
                mp.erase(data.first);
                pq.pop();
            // }
            // else
            // {
            //     cout << "empty\n";
            // }
        }
    }

    return 0;
}