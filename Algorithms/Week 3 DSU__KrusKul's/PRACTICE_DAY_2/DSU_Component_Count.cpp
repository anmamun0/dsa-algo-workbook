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
int find( int v )
{
    if(v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

int Union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);

    if(leaderA != leaderB)
    {
        if(Size[leaderA]< Size[leaderB])
        {
            swap(leaderA, leaderB);
        }
        parent[leaderB] = leaderA;
        Size[leaderA] += Size[b];
    }


}
int main()
{
    //Component Count korbo
    int N, e;
    cin >> N >> e;
    for (int i = 1; i <= N; i++)
    {
        make(i);
    }

    while(e--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    int cnt = 0;
    for (int i = 1; i<=N; i++)
    {
        if(i==find(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}