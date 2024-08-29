#include <bits/stdc++.h>
using namespace std;
const int H = 1e6 + 5;
int parent[H];
int Group_size[H];

void dsu_initialization(int n)
{
    for (int i = 1; i <= n; i++)
    {
        Group_size[i] = 1;
        parent[i] = -1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}
void dsu_by_rank(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (Group_size[leaderA] > Group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        Group_size[leaderA] += Group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        Group_size[leaderB] += Group_size[leaderA];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialization(n);

    int track = 0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA != leaderB)
        {
            dsu_by_rank(a, b);
        }
        else
        {
            track++;
        }
    }

    //
    cout << track << endl;

    return 0;
}