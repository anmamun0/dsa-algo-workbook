#include <bits/stdc++.h>
using namespace std;
vector<int> mat[300];
bool vis[300];
void BFS(int src, int * level)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0; 
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(auto child: mat[par])
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
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int N, e;
        cin >> N >> e;
        while(e--)
        {
            int a, b;
            cin >> a >> b;
            mat[a].push_back(b);
            mat[b].push_back(a);
        }
        int src, des;
        cin >> src >> des;

        int level_src[300];
        int level_des[300];

        memset(level_src, -1, sizeof(level_src));
        memset(level_des, -1, sizeof(level_des));

        memset(vis, false, sizeof(vis));
        BFS(src, level_src);
        memset(vis, false, sizeof(vis));
        BFS(des, level_des);

        int mx = INT_MIN;

        for (int i = 0; i < N; i++)
        {
            int src_to_building = level_src[i] + level_des[i];
            mx = max(mx, src_to_building);
        }
        
        cout << "Case " << i << ": " << mx << endl;

        for(int i =0; i<N; i++)
        {
            mat[i].clear();
        }
    }

    return 0;
}