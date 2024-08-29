#include <bits/stdc++.h>
using namespace std;
const int H = 1e5;
int parent[H];
int group_size[H];
void dsu_initialize(int N)
{
    for (int i = 0; i <= N; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if(parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if(group_size[leaderA]>group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

class Edge
{
    public:
        int u, v, w;
        Edge(int u,int v,int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int N, e;
    cin >> N >> e;
    dsu_initialize(N);

    vector<Edge> edgeList;
    while(e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    long long int totalCost = 0;

    long long int way = 0;

    for (Edge ed : edgeList)
    {
        int u = ed.u;
        int v = ed.v;
        long long int w = ed.w;

        int leaderA = dsu_find(u);
        int leaderB = dsu_find(v);

        if (leaderA != leaderB)
        {
            totalCost += w;
            dsu_union_by_size(u, v);
        }
    }

    for (int i = 1; i <= N; i++)
    {
        if (parent[i] == -1)
        {
            way++;
        }
    }

    if (way == 1)
    {
        cout << totalCost << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}