#include <bits/stdc++.h>
using namespace std;
int n, m;
const int H = 10e3;
char mat[H][H];
bool visit[H][H];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int level[H][H];

pair<int, int> path[3][4];

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}
void BFD_2D_Grid(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        // cout << a << " " << b << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) and !visit[ci][cj])
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
                level[ci][cj] = level[a][b] + 1;
                path[ci][cj] = {a, b};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[n][m];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(visit, false, sizeof(visit));
    memset(path, -1, sizeof(path));
    BFD_2D_Grid(si, sj);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << i<<j<<" ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << path[i][j].first << path[i][j].second << " ";
        }
        cout << endl;
    }

    pair<int, int> destination = {2,3};
    pair<int, int> x = destination;
    pair<int, int> non = {-1, -1};
    while (x != non)
    {
        cout << x.first << x.second << endl;
        x = path[x.first][x.second];
    }


    return 0;
}

/*
intput:
3 4
....
....
....
0 0
Output;
00 01 02 03 
10 11 12 13 
20 21 22 23 

-1-1 00 01 02 
00 01 02 03 
10 11 12 13 
23
13
03
02
01
00

*/