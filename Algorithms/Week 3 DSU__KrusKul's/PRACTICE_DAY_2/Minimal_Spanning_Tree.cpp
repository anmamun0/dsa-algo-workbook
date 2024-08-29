#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 5;
int parent[H];
int grpSize[H];
void make(int v)
{
    parent[v] = v;
}
int find(int node)
{
    if(node == parent[node])
        return node;
    // if(parent[node] == -1 )
    //     return node;
    return parent[node] = find(parent[node]);
}
void dsu_Union(int a,int b)
{
    int la = find(a);
    int lb = find(b);

    if(grpSize[la] > grpSize[lb])
    {
        parent[lb] = la;
        grpSize[la] += grpSize[lb];
    }
    else{
        parent[la] = lb;
        grpSize[lb] += grpSize[la];
    }
}
int main()
{
    int N,e;
    cin >> N >> e;
    for (int i = 0; i < N;i++)
    {
        make(i);
        grpSize[i] = 1;
    }

    vector<pair<int, pair<int, int>>> mat;


    while(e--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        mat.push_back({wt, {u, v}});
    }
    sort(mat.begin(), mat.end());

    int totalCost = 0;
    int edgeNo = 0;

    for(auto ed :mat)
    {
        int u = ed.second.first;
        int v = ed.second.second;
        int wt = ed.first;

        if(find(u) == find(v)) continue;
        dsu_Union(u, v);
        totalCost += wt;
        edgeNo++;
    }
    if(edgeNo == N-1)
    {
        cout << totalCost << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}