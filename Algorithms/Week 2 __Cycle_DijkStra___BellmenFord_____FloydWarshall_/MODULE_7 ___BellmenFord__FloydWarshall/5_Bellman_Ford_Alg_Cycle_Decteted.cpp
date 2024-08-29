#include <bits/stdc++.h>
using namespace std;
int dis[1000];
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    int N, e;
    cin >> N >> e;
    vector<Edge> EdgeList;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
        // EdgeList.push_back(Edge(v, u, c));
    }

    for (int i = 0; i < N; i++)
    {
        dis[i] = INT_MAX;
    }

    int src = 0;
    dis[src] = 0;

    for (int i = 1; i <= N - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            if (dis[u] < INT_MAX and (dis[u] + c < dis[v]))
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool Cycle = false;
    for (Edge ed : EdgeList)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;

        if (dis[u] < INT_MAX and (dis[u] + c < dis[v]))
        {
            Cycle = true;
            break;
            dis[v] = dis[u] + c;
        }
    }

    if (Cycle)
    {
        cout << "Cycle found. No Answer" << endl;
    }
    else
    {

        for (int i = 0; i < N; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }
    return 0;
}

/*
Input:
3 3
0 1 -1
1 2 2
2 0 -3

output:
Cycle Dected. No Ans


*/