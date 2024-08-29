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

    int c = 0;
    for (int i = 0; i < n; i++){
        if(!visit[i]){
            DFS(i);
            c++;
        }
    }
    cout << "Component ->" << c << endl;

    return 0;
}

/*
Input:
6 5
0 1
1 2
0 2
3 4
3 5

Output:
0
1
2
3
4
5
Component ->2


*/