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

    priority_queue<ll, vector<ll>, greater<ll>> pq;

    while(t--)
    {
        ll promt;
        cin >> promt;

        if(promt==1)
        {
            ll val;
            cin >> val;
            pq.push(val);
        }
        else if(promt==2)
        {
            if(!pq.empty())
            {
                ll min_val = pq.top();
                cout << min_val << '\n';
                while(!pq.empty())
                {
                    if(pq.top() == min_val)
                        pq.pop();
                    else break;
                }

            }
            else{
                cout << "empty\n";
            }

        }
    }

    return 0;
}