#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 10;
vector<int> mat[H];
int vis[H];
int level[H];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(auto child : mat[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}

int main()
{
    int N, start;
    cin >> N >> start;
    for (int i = 1; i <= N;i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int c;
            cin >> c;
            if(c==1)
            {
                mat[i].push_back(j);
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    BFS(start);

    for (int i = 1; i <= N; i++)
    {
        cout << level[i] << " ";
    }

        return 0;
}