#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool visit[1005];
int level[1005];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    level[src] = 0;

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
                level[child] = level[par] + 1;
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
    memset(level, -1, sizeof(level));

    BFS(src);

    for (int i = 0; i < N;i++){
        cout <<i<< " -> "<< level[i] << endl;
    }

        return 0;
}