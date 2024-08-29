#include <bits/stdc++.h>
using namespace std;

int finding = 0;
bool visit[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j, int n, int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void BFS_2D_Grid(int si, int sj, vector<vector<int>> &grid, int n, int m)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first;
        int b = par.second;
        q.pop();

        int flag = 0;
        // cout << a << " " << b << endl;


        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj, n, m) and !visit[ci][cj])
            {
                // if(grid[ci][cj]==1){
                //     flag++;
                // }
                q.push({ci, cj});
                visit[ci][cj] = true;
                if ((grid[a][b] == 1 & grid[ci][cj] == 0) || (grid[a][b] == 0 && grid[ci][cj] == 1))
                {
                    flag++;
                }
                // cout << grid[ci][cj] << endl;
            }
        }
        if (flag == 4)
        {
            finding++;
        }
        flag = 0;
    }
}
int closedIsland(vector<vector<int>> &grid)
{
    int m = grid[0].size();
    int n = grid.size();
    memset(visit, false, sizeof(visit));
    int si = 0;
    int sj = 0;
    BFS_2D_Grid(si, sj, grid, n, m);
    return finding;
}

int main()
{
    vector<vector<int>> grid = {{1, 1, 1, 1, 1, 1, 1, 0}, {1, 0, 0, 0, 0, 1, 1, 0}, {1, 0, 1, 0, 1, 1, 1, 0}, {1, 0, 0, 0, 0, 1, 0, 1}, {1, 1, 1, 1, 1, 1, 1, 0}};

    cout<<closedIsland(grid)<<endl;
    cout << grid[0][1] << endl;

    return 0;
}