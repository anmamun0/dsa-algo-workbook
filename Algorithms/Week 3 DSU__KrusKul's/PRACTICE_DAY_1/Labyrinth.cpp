#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
char mat[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<pair<int, int>, char> path[1005][1005];
// char path[1000][1000];

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= N || j >= M || mat[i][j] == '#')
        return false;
    return true;
}
void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int a = parent.first;
        int b = parent.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) and !vis[ci][cj] and mat[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[a][b] + 1;
                if (i == 0)
                {
                    // path[ci][cj] = 'R';
                    path[ci][cj] = {{a, b}, 'R'};
                }
                else if (i == 1)
                {
                    // path[ci][cj] = 'L';
                    path[ci][cj] = {{a, b}, 'L'};
                }
                else if (i == 2)
                {
                    // path[ci][cj] = 'U';
                    path[ci][cj] = {{a, b}, 'U'};
                }
                else if (i == 3)
                {
                    // path[ci][cj] = 'D';
                    path[ci][cj] = {{a, b}, 'D'};
                }
            }
        }
    }
}
int main()
{
    cin >> N >> M;

    int Ai, Aj, Bi, Bj;

    bool chackA = false;
    bool chackB = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            char a;
            cin >> a;
            mat[i][j] = a;
            if (a == 'A')
            {
                Ai = i, Aj = j;
                chackA = true;
            }
            if (a == 'B')
            {
                Bi = i, Bj = j;
                chackB = true;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(path, -1, sizeof(path));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            path[i][j].second = 'N';
        }
    }

    BFS(Ai, Aj);
    vector<char> road;

    pair<int, int> des = {Bi, Bj};
    pair<int, int> non = {-1, -1};

    while (des != non)
    {
        // cout << x.first << x.second << " ";
        char rr = path[des.first][des.second].second;
        if (rr != 'N')
            road.push_back(rr);
        des = path[des.first][des.second].first;
    }
    reverse(road.begin(), road.end());

    if (chackA and chackB and vis[Bi][Bj] == true)
    {
        cout << "YES" << endl;
        cout << level[Bi][Bj] << endl;
        for (char a : road)
        {
            cout << a;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    for (int i = 0; i < N;i++)
    {
        for (int j = 0; j < M;j++)
        {
            cout << path[i][j].second << " ";
        }
        cout << endl;
    }

        return 0;
}