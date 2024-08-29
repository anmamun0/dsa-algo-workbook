#include <bits/stdc++.h>
using namespace std;
const int H = 1e3 + 10;
int N, M;
int si, sj, ei, ej;
char mat[H][H];
bool visit[H][H];
pair<int, int> path[H][H];
vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= N || j >= M)
        return false;
    return true;
}
void BFS(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
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
            if (valid(ci, cj) and !visit[ci][cj] and mat[ci][cj])
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
                path[ci][cj] = {a, b};
            }
        }
    }
}
int main()
{
    cin >> N >> M;
    memset(visit, false, sizeof(visit));
    memset(path, -1, sizeof(path));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == '#')
                visit[i][j] = true;
            if (mat[i][j] == 'D')
            {
                ei = i, ej = j;
            }
            if (mat[i][j] == 'R')
            {
                si = i, sj = j;
            }
        }
    }
    BFS(si, sj);

    if (visit[ei][ej])
    {
        pair<int, int> x = {-1, -1};
        pair<int, int> out = {ei, ej};

        while (out != x)
        {
            mat[out.first][out.second] = 'X';
            out = path[out.first][out.second];
        }
        mat[si][sj] = 'R';
        mat[ei][ej] = 'D';

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}