#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 10;
vector<int> mat[H];
bool vis[H];
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
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        for (int i = 1; i < N; i++)
        {
            int a, b;
            cin >> a >> b;
            mat[a].push_back(b);
            mat[b].push_back(a);
        }

        int x;
        cin >> x;

        vector<pair<int, int>> same;

        while (x--)
        {
            memset(vis, false, sizeof(vis));
            memset(path, -1, sizeof(path));

            int u, v;
            cin >> u >> v;
            // cout << u << " " << v << endl;

            BFS(u);

            if (path[v] != -1)
            {
                vector<int> e;

                while (v != -1)
                {
                    e.push_back(v);
                    v = path[v];
                }
                reverse(e.begin(), e.end());

                int flag = true;
                int fast;
                for (int i = 0; i < e.size(); i++)
                {
                    if (flag)
                    {
                        fast = e[i];
                        flag = false;
                    }
                    else
                    {
                        same.push_back({fast, e[i]});
                        flag = true;
                    }
                }
            }
        }
        map<pair<int, int>, int> mp;

        for (auto c : same)
        {
            cout << c.first << " " << c.second << endl;
            mp[{c.first, c.second}]++;
            mp[{c.second, c.first}]++;
        }

        int a = 0; 
        for(auto c:same)
        {
            a += mp[{c.first, c.second}];
            // cout << a << endl;
            mp.erase({c.second, c.first});
        }

        cout << a << endl;
    }


return 0;
}