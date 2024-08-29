#include <bits/stdc++.h>
using namespace std;
int N, M;
char mat[10010][10010];
bool visit[10010][10010];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool chack = false;
bool valid(int i,int j)
{
    if(i<0 || j<0 || i>=N || j>=M || mat[i][j] == '-')
        return false;
    return true;
}
void DFS_2D_grid(int si,int sj,int di,int dj)
{
    if(si == di and sj == dj)
    {
        chack = true;
        return;
    }
    visit[si][sj] = true;
    for (int i = 0; i < 4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(!visit[ci][cj] and valid(ci,cj))
        {
            DFS_2D_grid(ci, cj,di,dj);
        }
    }
}
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mat[i][j];
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(visit, false, sizeof(visit));
    DFS_2D_grid(si, sj, di, dj);

    if(chack)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}