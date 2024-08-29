#include <bits/stdc++.h>
using namespace std;
int n, m;
char mat[20][20];
bool visit[20][20];
int level[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void BFS_2D_Printing(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        // cout << a << " " << b << endl;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && visit[ci][cj] == false)
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    int si, sj;
    cin >> si >> sj;
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    BFS_2D_Printing(si, sj);

    cout << level[2][2];

    return 0;
}


/*
Input:
3 4
....
....
....
0 0

Output:
0 0
0 1
0 2
0 3
1 3
1 2
1 1
1 0
2 0
2 1
2 2
2 3
*/