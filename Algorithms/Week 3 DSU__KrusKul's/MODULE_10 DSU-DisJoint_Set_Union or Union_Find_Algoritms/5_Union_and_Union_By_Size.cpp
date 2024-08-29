#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 5;
int par[H];
void DSU_initialize(int N)
{
    for (int i = 0; i < N;i++)
    {
        par[i] = -1;
    }

    //GroupA
    par[1] = 2;
    par[2] = 3;

    //GroupB
    par[5] = 6;
    par[6] = 7;
}

int find(int node)  // TIme Complexity O(logN); Path Comprestion Optimize version
{
    if(par[node] ==-1 ) return node;

    int leader = find(par[node]);
    par[node] = leader;

    return leader;
}
void dsu_union(int node1, int node2)
{
    int leaderA = find(node1); //3
    int leaderB = find(node2); //7

    par[leaderA] = leaderB;
}


int main()
{
    DSU_initialize(8);

    cout << find(1) << endl;
    dsu_union(1, 5);
    cout << find(1) << endl;

    return 0;
}