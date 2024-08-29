#include <bits/stdc++.h>
using namespace std;
const int H = 1e7;
vector<int> mat[H];
bool visit[H];
int level[H];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    level[src] = 0;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(auto child: mat[par])
        {
            if(!visit[child])
            {
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
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int i, j,step;
    cin >> i >> j >> step;

    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    BFS(i);
    
    int levelb = level[j];

    if(levelb !=-1 and ceil(float(levelb)/2) <= step)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}