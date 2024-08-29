#include <bits/stdc++.h>
using namespace std;
const int H = 1e4+30;
int n, m;
char arr[H][H];
bool vis[H][H];
int track=0;
vector<pair<int, int>> d = {{0, -1},{0, 1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < m );
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    track++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
    

        if (valid(ci, cj) and !vis[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    vector<int> v;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            
        }
    }
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(arr[i][j] != '.')
                {
                    vis[i][j] = true;
                }
                
            }
        }

    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j])
            {
                dfs(i, j);
                v.push_back(track);
                track = 0; 
            }
        }
    }
    sort(v.begin(), v.end());

    if(v.size()>=1)
    {
        cout << v.front() << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}