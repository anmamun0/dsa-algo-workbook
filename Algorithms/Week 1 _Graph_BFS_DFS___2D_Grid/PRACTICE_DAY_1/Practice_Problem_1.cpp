#include <bits/stdc++.h>
using namespace std;
vector<int> mat[10005];
bool visit[10005];
int level[10005];
int parent_Path[10005];
void BFS(int src, int destination)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : mat[par])
        {
            if (!visit[child])
            {
                q.push(child);
                visit[child] = true;
                level[child] = level[par] + 1;
                parent_Path[child] = par;
            }
        }
    }
}
void Path_of_destination(int src, int destination)
{
    if (src == destination)
    {
        cout << 0 << endl;
        return;
    }
    if (parent_Path[destination] == -1)
    {
        cout << "-1" << endl;
        return;
    }

    int x = destination;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = parent_Path[x];
    }
    reverse(path.begin(), path.end());

    // if (path[0] != src)
    // {
    //     cout << "-1" << endl;
    // }
    // else
    // {
    cout << path.size() - 1 << endl;
    // }
}
int main()
{
    int N, e;
    cin >> N >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int road;
    cin >> road;

    while (road--)
    {
        int src, destination;
        cin >> src >> destination;
        memset(visit, false, sizeof(visit));
        memset(level, -1, sizeof(level));
        memset(parent_Path, -1, sizeof(parent_Path));

        BFS(src, destination);

        Path_of_destination(src, destination);
    }

    return 0;
}