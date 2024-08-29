#include <bits/stdc++.h>
using namespace std;
int N, M;
char mat[10005][10005];
bool visit[10005][10005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 or j < 0 or i >= N or j >= M or mat[i][j] != '.')
        return false;
    return true;
}
vector<int> path;
void DFS_2D_Grid(int si, int sj)
{
    // cout << si<<" "<<sj << endl;
    path.push_back(mat[si][sj]);
    visit[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) and !visit[ci][cj])
        {
            DFS_2D_Grid(ci, cj);
        }
    }
}
int main()
{
    cin >> N >> M;
    memset(visit, false, sizeof(visit));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];
        }
    }
    vector<int> instraction;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mat[i][j] == '.' and !visit[i][j])
            {
                DFS_2D_Grid(i, j);
                instraction.push_back(path.size());
                path.clear();
            }
        }
    }
    sort(instraction.begin(), instraction.end());
    if (instraction.empty())
    {
        cout << "0" << endl;
    }
    else
    {
        for (int c : instraction)
        {
            cout << c << " ";
        }
    }

    return 0;
}