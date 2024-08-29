#include <bits/stdc++.h>
using namespace std;
const int H = 1e4;
int N, M;
char mat[H][H];
bool visit[H][H];
int cnt;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= N || j >= M)
        return false;
    return true;
}
void DFS(int si, int sj)
{
    visit[si][sj] = true;
    cnt++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) and !visit[ci][cj])
        {
            DFS(ci, cj);
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
            if (mat[i][j] != '.')
                visit[i][j] = true;
            
        }
    }

    vector<int> home;

    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(!visit[i][j])
            {
                cnt = 0;
                DFS(i, j);
                home.push_back(cnt);
                cnt = 0; 
            }
        }
    }
    sort(home.begin(), home.end());

    if(!home.empty())
    {
        cout << home.front() << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}