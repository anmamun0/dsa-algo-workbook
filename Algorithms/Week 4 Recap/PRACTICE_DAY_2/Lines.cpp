#include <bits/stdc++.h>
using namespace std;
const int H = 1e3 + 10;
int N;
int si, sj, ei, ej;
char mat[H][H];
bool vis[H][H];
pair<int, int> path[H][H];
vector<pair<int, int>> d = {{-1,0}, {0, 1}, {0, -1}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= N || j >= N)
        return false;
    return true;
}
void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) and !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                path[ci][cj] = {a, b};
            }
        }
    }
}

int main()
{
    cin >> N;

    memset(path, -1, sizeof(path));
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'X')
            {
                ei = i, ej = j;
            }
            if (mat[i][j] == '@')
                si = i, sj = j;

            if (mat[i][j] == 'O')
                vis[i][j] = true;
        }
    }


    BFS(si, sj);

    if(vis[ei][ej])
    {
        cout << "Y" << endl;

        pair<int, int> x = {-1, -1};
        pair<int, int> out = {ei, ej};

        while (out != x)
        {
            mat[out.first][out.second] = '+';
            out = path[out.first][out.second];
        }
        mat[si][sj] = '@';
      

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
            }
    }
    else{
        cout << "N" << endl;
    }

    return 0;
}