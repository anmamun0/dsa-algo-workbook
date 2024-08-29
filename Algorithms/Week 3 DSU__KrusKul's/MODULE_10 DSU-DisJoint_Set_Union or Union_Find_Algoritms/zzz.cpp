#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 5;
int parent[H];
int level[H];

void DSU_initialize(int N)
{
    for (int i = 0; i <= N;i++)
    {
        parent[i] = -1;
        level[i] = 0;
    }
}
int find(int node)
{
    if(parent[node] == -1)
        return node;

    return parent[node] = find(parent[node]);
}

void DSU_union_by_rank_level(int a,int b)
{
    int leader_a = find(a);
    int leader_b = find(b);

    if(level[leader_a] > level[leader_b])
    {
        parent[leader_b] = leader_a;
    }
    else if(level[leader_b]> level[leader_a])
    {
        parent[leader_a] = leader_b;
    }
    else{
        parent[leader_b] = leader_a;
        level[leader_a]++;
    }
}
int main()
{
    

    return 0;
}