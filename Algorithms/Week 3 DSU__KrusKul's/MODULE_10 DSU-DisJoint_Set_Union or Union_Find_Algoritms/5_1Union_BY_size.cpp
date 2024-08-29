#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 5;
int par[H];
int group_size[H];
void DSU_initialize(int N)
{
    for (int i = 0; i < N;i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }

 
}

int find(int node)  // TIme Complexity O(logN); Path Comprestion Optimize version
{
    if(par[node] ==-1 ) return node;

    int leader = find(par[node]);
    par[node] = leader;

    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = find(node1); //3
    int leaderB = find(node2); //7

    if(group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }

}
int main()
{
    //Time complexity O(a(N)) / 4 / logN / constent 4

    DSU_initialize(7);

    dsu_union_by_size(1, 2);
    dsu_union_by_size(2, 3);

    dsu_union_by_size(4, 5);
    dsu_union_by_size(5, 6);

    cout << find(1) << endl;
    cout << find(4) << endl;

    return 0;
}