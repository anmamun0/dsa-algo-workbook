#include <bits/stdc++.h>
using namespace std;
int N;
char mat[50][50];
bool visit[50][50];
int level[50][50];

vector<pair<int, int> > d;

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= N || j>= N)
        return false;
    return true;
}

void BFS(int si, int sj)
{
    queue<pair<int, int> > q;
    q.push({si, sj});
    visit[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if(valid(ci,cj) and !visit[ci][cj])
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
                level[ci][cj] = level[a][b] + 1;
            }
        }
    }
}

int main()
{
    d.push_back({0, 1});
    d.push_back({0, -1});
    d.push_back({-1, 0});
    d.push_back({1, 0});

    while(cin >> N)
    {
        int si, sj, ei, ej;
        
        memset(visit, false, sizeof(visit));
        memset(level, -1, sizeof(level));

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> mat[i][j];

                if(mat[i][j]=='T')
                    visit[i][j] = true;

                if(mat[i][j]=='S')
                    si = i, sj = j;

                if(mat[i][j]=='E')
                    ei = i, ej = j;
            }
        }
        BFS(si, sj);

        cout << level[ei][ej] << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;
bool vis[35][35];
int level[35][35];
vector<pair<int,int>> v = {{-1,0},{1,0},{0,1},{0,-1}};
int n;
bool valid(int i ,int j)
{
    if(i >= 0 && i < n && j >= 0 && j < n) return true;
    return false;
}
void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        for(int i = 0; i < 4; i++)
        {
            int ci = a + v[i].first;
            int cj = a + v[i].second;
            if(valid(ci,cj) && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[a][b] + 1;
            }
        }
    }
}
int main(){
    int si,sj,di,dj;
    cin>>n;
    char adj[n][n];
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>adj[i][j];
            if(adj[i][j] == 'S')
            {
                si = i;
                sj = j;
            }
            if(adj[i][j] == 'E')
            {
                di = i, dj = j;
            }
            if(adj[i][j] == 'T') vis[i][j] = true;
        }
    }
    bfs(si,sj);
    cout << level[di][dj] << endl;
    return 0;
}