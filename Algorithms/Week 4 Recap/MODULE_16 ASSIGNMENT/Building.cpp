#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int H = 1e6 + 10;
int par[H];
int grp[H];

void make(int N)
{
    for (int i = 1; i <= N; i++)
    {
        par[i] = i;
        grp[i] = 1;
    }
}
int find(int node)
{
    if (par[node] == node)
        return node;
    return par[node] = find(par[node]);
}

void Union(int a, int b)
{
    int la = find(a);
    int lb = find(b);

    if (grp[la] > grp[lb])
    {
        par[lb] = la;
        grp[la] += grp[lb];
    }
    else
    {
        par[la] = lb;
        grp[lb] += grp[la];
    }
}
int main()
{
    int N, e;
    cin >> N >> e;
    make(N);

    vector<pair<ll, pair<int, int>>> edges;

    while (e--)
    {
        int u, v;
        ll wt;
        
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }

    sort(edges.begin(), edges.end());

    ll connection = 0;
    ll use_less = 0;

    for (auto cd : edges)
    {
        ll wt = cd.first;
        int u = cd.second.first;
        int v = cd.second.second;

        int la = find(u);
        int lb = find(v);

        if (la != lb)
        {
            connection += wt;
            Union(u, v);
        }
    }

    for (int i = 1; i <= N; i++)
    {
        if (par[i] == i)
        {
            use_less++;
        }
    }

    if (use_less > 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << connection << endl;
    }

    return 0;
}