#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
void dsu_initialize(int N)
{
    for (int i = 0; i < N; i++)
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

    if(group_size[leaderA]> group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{

    int N, e;
    cin >> N >> e;
    dsu_initialize(N);

    bool cycle = false;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB)
        {
            cycle = true;
        }
        else{
            dsu_union_by_size(a, b);
        }
    }
    if(cycle)
        cout << "Cycle found" << endl;
    else
        cout << "cycle not found" << endl;

    return 0;
}

/*
Input:
6 6
0 1
0 2
0 3
3 4
3 5
4 5

Output:
cycle not found
*/