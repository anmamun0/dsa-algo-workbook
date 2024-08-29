#include <bits/stdc++.h>
using namespace std;
const int H = 1000;
int N, M, ki, kj, qi, qj;
bool visit[H][H];
int mat[H][H];
int level[H][H];
pair<int, int> path[H][H];

vector<pair<int, int>> d = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
bool chack;

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= N || j >= M)
        return false;
    return true;
}
void BFS_2D_grid(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    level[si][sj] = 0;
    path[si][sj] = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int pi = parent.first;
        int pj = parent.second;
        for (int i = 0; i < 8; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if (!visit[ci][cj] and valid(ci, cj))
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
                level[ci][cj] = level[pi][pj] + 1;
                path[ci][cj] = {pi, pj};
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> N >> M >> ki >> kj >> qi >> qj;
        chack = false;

        memset(visit, false, sizeof(visit));
        memset(level, -1, sizeof(level));
        memset(path, -1, sizeof(path));

        BFS_2D_grid(ki, kj);
        // for (int i = 0; i < N; i++)
        // {
        //     for (int j = 0; j < M; j++)
        //     {
        //         cout<< level[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        if(level[qi][qj] == -1){
            cout << -1 << endl;
        }
        else{
            cout << level[qi][qj] << endl;
        }
    }

    return 0;
}