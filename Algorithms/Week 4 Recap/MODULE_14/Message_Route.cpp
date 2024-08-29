#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll H = 1e7 + 10;
vector<ll> mat[H];
bool vis[H];
ll path[H];
 
void BFS(ll src)
{
    queue<ll> q;
    q.push(src);
    vis[src] = true;
    
    while(!q.empty())
    {
        ll parent = q.front();
        q.pop();
 
        for(ll child: mat[parent])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                path[child] = parent;
            }
        }
    }
}
 
int main()
{
    ll N, e;
    cin >> N >> e;
    while(e--)
    {
        ll a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(path, -1, sizeof(path));

    BFS(1);
 
    if(path[N] != -1)
    {
        vector<ll> road;
 
        while(N != -1)
        {
            road.push_back(N);
            N = path[N];
        }
        reverse(road.begin(), road.end());
        cout << road.size() << endl;
        for(ll child: road)
        {
            cout << child << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
 
        return 0;
}