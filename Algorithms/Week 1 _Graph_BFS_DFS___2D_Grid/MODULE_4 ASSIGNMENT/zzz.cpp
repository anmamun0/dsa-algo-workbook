#include <bits/stdc++.h>
using namespace std;
bool AB = false;
bool BA = false;
bool vis[10005][10005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char a[10005][10005];

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] == '#')
        return false;
    return true;
}

void dfs(int i, int j)
{
    vis[i][j] = true;

    for (int p = 0; p < 4; p++)
    {
        int ci = i + d[p].first;
        int cj = j + d[p].second;

        if (valid(ci, cj) && !vis[ci][cj])
        {

            dfs(ci, cj);
        }
    }
    if (a[i][j] == 'B' and vis[i][j] == true)
    {
        BA = true;
        return;
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'A')
            {
                dfs(i, j);
                AB = true;
            }
        }
    }

    if (AB && BA)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}