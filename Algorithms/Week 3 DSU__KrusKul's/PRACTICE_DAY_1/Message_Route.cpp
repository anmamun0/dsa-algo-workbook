#include <bits/stdc++.h>

using namespace std;
vector<int> mat[1000000];
bool vis[1000000];
int path[1000000];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    
    while(!q.empty())
    {
        int parent = q.front();
        q.pop();

        for(int child: mat[parent])
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
    int N, e;
    cin >> N >> e;
    bool chack1 = false;
    bool chackN = false;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);

        if(a==N)
            chackN = true;
        if(b == N)
            chackN = true;
        if(a==1)
            chack1 = true;
        if(b == 1)
            chack1 = true;
    }
    memset(vis, false, sizeof(vis));
    memset(path, -1, sizeof(path));

    if(chackN and chack1)
    {
        BFS(1);
        vector<int> road;

        while(N != -1)
        {
            road.push_back(N);
            N = path[N];
        }
        reverse(road.begin(), road.end());
        cout << road.size() << endl;
        for(int child: road)
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