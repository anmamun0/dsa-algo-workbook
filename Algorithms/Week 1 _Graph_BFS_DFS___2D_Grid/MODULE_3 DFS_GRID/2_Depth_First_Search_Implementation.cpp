#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool visit[N];
void DFS(int src)
{
    cout << src << endl;
    visit[src] = true;
    for(int child:v[src])
    {
        if(!visit[child]){
            DFS(child);
        }
    }
} 
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(visit, false, sizeof(visit));
    DFS(0);


    return 0;
}

/*
Input:
6 6
0 1
0 2
0 3
1 4
3 5
3 2

Output:
0
1
4
2
3
5

*/