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
int find(int node)
{
    if(parent[node] == -1)
        return node;
    return parent[node] = find(parent[node]);
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);

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

    int totalCost = 0;
    for(Edge ed:edgeList)
    {
        int leaderU = find(ed.u);
        int leaderV = find(ed.v);

        if(leaderU == leaderV)
        {
            continue;
        }
        else{
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
        }
    }

    cout << totalCost << endl;

    return 0;
}

/*
5 7
0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7
1 4 5

Output:
12
*/