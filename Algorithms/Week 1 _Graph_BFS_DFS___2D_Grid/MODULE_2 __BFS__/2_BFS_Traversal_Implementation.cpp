#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool visit[1000];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout << par << endl;
        for(int child: v[par])
        {
            if(!visit[child]){
                q.push(child);
                visit[child] = true;
            }
        }
    }
}
int main()
{
    int N, e;
    cin >> N >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(visit, false, sizeof(visit));

    BFS(src);

    return 0;
}