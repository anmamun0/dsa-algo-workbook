#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int par[1000000];
int grp[1000000];
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

void dsu_initialization(int N)
{
    for (int i = 0; i <= N; i++)
    {
        par[i] = -1;
        grp[i] = 1;
    }
}
int find(int node)
{
    if (par[node] == -1)
        return node;
    return par[node] = find(par[node]);
}
void dsu_union_by_size(int a, int b)
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
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{
    int N, e;
    cin >> N >> e;
    dsu_initialization(N);

    vector<Edge> edglist;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edglist.push_back(Edge(u, v, w));
    }
    sort(edglist.begin(), edglist.end(), cmp);

    ll totalCost = 0;
    int edge = 0;

    for (Edge ed : edglist)
    {

        int leaderU = find(ed.u);
        int leaderV = find(ed.v);
        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
            edge++;
        }
    }

    if (edge == N - 1)
    {
        cout << totalCost << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}