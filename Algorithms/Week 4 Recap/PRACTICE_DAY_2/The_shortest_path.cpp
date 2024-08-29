#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 10;
vector<int> mat[H];
bool vis[H];
int level[H];
int path[H];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (auto child : mat[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                path[child] = par;
            }
        }
    }
}

int main()
{
    int N, e;
    cin >> N >> e;

    int srt, end;
    cin >> srt >> end;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(path, -1, sizeof(path));

    BFS(srt);
    vector<int> road;
    while (end != -1)
    {
        road.push_back(end);
        end = path[end];
    }
    reverse(road.begin(), road.end());

    if (!road.empty())
    {

        cout << road.size() - 1 << endl;

        for (auto c : road)
        {
            cout << c << " ";
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}