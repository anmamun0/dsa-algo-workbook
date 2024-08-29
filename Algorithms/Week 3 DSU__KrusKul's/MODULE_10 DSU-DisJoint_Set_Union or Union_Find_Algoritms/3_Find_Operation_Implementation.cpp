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
    par[1] = 3;
    par[2] = 1;
}
// int find(int node)  // TIme Complexity O(N);
// {
//     if(par[node] ==-1 ) return node;

//     return find(par[node]);
// }
int find(int node)  // TIme Complexity O(logN); Path Comprestion Optimize version
{
    if(par[node] ==-1 ) return node;

    int leader = find(par[node]);
    par[node] = leader;

    return leader;
}
int main()
{
    DSU_initialize(4);

    cout << find(0) << endl;
    cout << find(1) << endl;
    cout << find(2) << endl;
    cout << find(3) << endl;

    return 0;
}