#include <bits/stdc++.h>
using namespace std;
vector<int> mat[1005];
int visit[1005];
int level[1005];
int parent[10005];
void BFS(int src){
    queue<int> q;
    q.push(src);
    visit[src] = true;
    level[src] = 0; 
    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(int child:mat[par]){
            if(!visit[child]){
                q.push(child);
                visit[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}
int main()
{
    int N, e;
    cin >> N >> e;
    while(e--){
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int src,destination;
    cin >> src >> destination;
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    BFS(src);


    int x = destination;
    vector<int> path;
    while(x!=-1){
        // cout << x << " ";
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());
    

    for(int c:path){
        cout << c << " ";
    }

    return 0;
}