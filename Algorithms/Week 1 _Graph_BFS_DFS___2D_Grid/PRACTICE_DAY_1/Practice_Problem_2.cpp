#include <bits/stdc++.h>
using namespace std;
vector<int> mat[10005];
bool visit[10005];
int level[10005];
priority_queue<int> current_level;
void BFS(int src,int find_level)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    level[src] = 0;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        if(level[par] == find_level ){
            current_level.push(par);
        }
        for(int child: mat[par]){
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
    while(e--){
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int find_level;
    cin >> find_level;
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    BFS(0, find_level);
    
    while(!current_level.empty()){
        cout << current_level.top() << " ";
        current_level.pop();
    }

    return 0;
}