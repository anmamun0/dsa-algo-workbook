#include <bits/stdc++.h>
using namespace std;
int des[1000010];
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
    vector<Edge> Edge_list;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Edge_list.push_back(Edge(u, v, c));
    }
    for (int i = 1; i <= N; i++)
    {
        des[i] = 30000;
    }

    int src = 1;
    des[src] = 0;
    for (int i = 1; i <= N - 1; i++)
    {
        for (Edge child : Edge_list)
        {
            int u = child.u;
            int v = child.v;
            int c = child.c;
            if (des[u] < 30000 and (des[u] + c < des[v]))
            {
                des[v] = des[u] + c;
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        cout << des[i] << " ";
    }

    return 0;
}