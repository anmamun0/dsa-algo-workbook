#include <bits/stdc++.h>
using namespace std;
vector<int> mat[1005];
bool visit[1005];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = 1;
    while (!q.empty())
    {
        int pre = q.front();
        q.pop();
        cout << pre << endl;
        for (int i = 0; i < mat[pre].size(); i++)
        {
            if (!visit[mat[pre][i]])
            {
                q.push(mat[pre][i]);
                visit[mat[pre][i]] = 1;
            }
        }
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
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(visit, false, sizeof(visit));
    BFS(src);

    return 0;
}