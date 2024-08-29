#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll des[1000010];


class Edge
{
public:
    int u, v;
    ll c;
    Edge(int u, int v, ll c)
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
    vector<Edge> mat;

    while (e--)
    {
        int u, v;
        ll c;
        cin >> u >> v >> c;
        mat.push_back(Edge(u, v, c));
    }
    int src, T;
    cin >> src >> T;

    //-Doing fill fast Higest Value in destination box---->
    for (int i = 1; i <= N; i++)
    {
        des[i] = LONG_MAX;
        
    }
    des[src] = 0;

    //-Main section to finding destination---->
    for (int i = 1; i <= N; i++)
    {
        for (Edge child : mat)
        {
            int u = child.u;
            int v = child.v;
            ll c = child.c;
            if (des[u] < LONG_MAX and c + des[u] < des[v])
            {
                des[v] = c + des[u];
            }
        }
    }

    // Chacking Cycle or Not ------------------->
    bool cycle = false;
    for (Edge child : mat)
    {
        int u = child.u;
        int v = child.v;
        ll c = child.c;
        if (des[u] < INT_MAX and c + des[u] < des[v])
        {
            cycle = true;
            break;
        }
    }
    // Chacking Cycle or Not END ------------------->


    if(cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else{
        while(T--)
        {
            ll road;
            cin >> road;
            if(des[road] == LONG_MAX)
                cout << "Not Possible" << endl;
            else
                cout << des[road] << endl;
        }
    }


    return 0;
}