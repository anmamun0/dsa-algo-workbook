#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool visit[1005];
void BFS(int src,int distination)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    visit[src] = true;

    bool chack = false;

    while (!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;

        if(par == distination){
            cout << level << endl;
            chack = true;
        }
  
        for(int child: v[par])
        {
            if(!visit[child]){
                q.push({child,level+1});
                visit[child] = true;
            }
        }
    }
    if(!chack){
        cout << "Not Found any Road!" << endl;
    }
}
int main()
{
    int N, e;
    cin >> N >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(visit, false, sizeof(visit));

    BFS(src,9);

   

        return 0;
}