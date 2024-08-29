#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N];
int Size[N];

void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}
int find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

int Union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);

    if (leaderA != leaderB)
    {
        if (Size[leaderA] < Size[leaderB])
        {
            swap(leaderA, leaderB);
        }
        parent[leaderB] = leaderA;
        Size[leaderA] += Size[b];
    }
}
int main()
{
    // Component Count korbo
    int N, e;
    cin >> N >> e;
    vector<pair<int, pair<int, int>>> edges;

    while (e--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }
    for (int i = 1; i <= N; i++)
    {
        make(i);
    }

    sort(edges.begin(), edges.end());

    long long int totalCost = 0;
    for(auto edge:edges)
    {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;

        if(find(u) == find(v))
            continue;
        Union(u, v);
        totalCost += wt;
    }
    cout << totalCost << endl;
    return 0;
}