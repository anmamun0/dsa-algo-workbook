#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> mat[1000000];
bool vis[1000000];

void DFS(int src)
{

    vis[src] = true;
    for (int child : mat[src])
    {
        if (!vis[child])
        {
            DFS(child);
        }
    }
}
int main()
{
    int N, e;
    cin >> N >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    vector<pair<ll, ll>> edge;

    ll val = 0;
    bool flag = false;

    for (ll i = 1; i <= N; i++)
    {
        if (!vis[i])
        {

            if (flag)
            {
                edge.push_back({val, i});
                flag = false;
            }
            DFS(i);
            val = i;
            flag = true;
        }
    }
    cout << edge.size() << endl;
    for (auto e : edge)
    {
        cout << e.first << " " << e.second << endl;
    }

        return 0;
}