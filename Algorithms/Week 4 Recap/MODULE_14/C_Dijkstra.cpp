#include <bits/stdc++.h>
#define pi pair<ll, ll>
#define ll long long
using namespace std;
const ll H = 1e6 + 5;
vector<pi> mat[H];
ll des[H];
ll path[H];

void DijKstra(ll src)
{
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push({0, src});
    des[src] = 0;
    while (!pq.empty())
    {
        pi par = pq.top();
        pq.pop();
        ll cost = par.first;
        ll node = par.second;

        for (auto child : mat[node])
        {
            ll child_node = child.first;
            ll child_cost = child.second;
            if (cost + child_cost < des[child_node])
            {
                des[child_node] = cost + child_cost;
                pq.push({des[child_node], child_node});
                path[child_node] = node;
            }
        }
    }
}

int main()
{
    ll N, e;
    cin >> N >> e;
    while (e--)
    {
        ll u, v, wt;
        cin >> u >> v >> wt;
        mat[u].push_back({v, wt});
        mat[v].push_back({u, wt});
    }

    for (ll i = 1; i <= N; i++)
    {
        des[i] = 1e18;
        path[i] = -1;
    }

    DijKstra(1);

    if (des[N] != 1e18)
    {
        vector<int> road;

        ll x = N;
        while (x != -1)
        {
            road.push_back(x);
            x = path[x];
        }
        reverse(road.begin(), road.end());
        for (auto c : road)
        {
            cout << c << " ";
        }
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}