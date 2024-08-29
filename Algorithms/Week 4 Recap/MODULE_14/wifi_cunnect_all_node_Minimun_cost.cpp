#include <bits/stdc++.h>
using namespace std;
int par[10000];
int grp[1000];
void make(int N)
{
    for (int i = 0; i <=N; i++)
    {
        par[i] = i;
        grp[i] = 1;
    }
}
int find(int node)
{
    if(par[node] == node)
        return node;
    return par[node] = find(par[node]);
}
void Union(int a, int b)
{
    int la = find(a);
    int lb = find(b);
    if(grp[la] > grp[lb])
    {
        par[lb] = la;
        grp[la] += grp[lb];
    }
    else{
        par[la] = lb;
        grp[lb] += grp[la];
    }
}
int main()
{

    int N, e;
    cin >> N >> e;
    make(N);

    vector<pair<int, pair<int, int>>> edges;
    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edges.push_back({w, {a, b}});
    }
    sort(edges.begin(), edges.end());

    int totalCost = 0;

    for(auto ed:edges)
    {
        int wt = ed.first;
        int u = ed.second.first;
        int v = ed.second.second;

        int la = find(u);
        int lb = find(v);
        if(la == lb) continue;

        Union(u, v);
        totalCost += wt;
    }
    cout << totalCost << endl;

    return 0;
}