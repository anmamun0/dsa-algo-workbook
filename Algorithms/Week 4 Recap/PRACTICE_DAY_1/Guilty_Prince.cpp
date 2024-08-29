#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll n = 0, m = 0, si = 0, sj = 0;
char mat[50][50];
bool vis[50][50];
vector<pair<ll, ll>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= m || j >= n)
        return false;
    return true;
}
ll cnt;
void DFS(ll si, ll sj)
{
    vis[si][sj] = true;
    cnt++;

    for (ll i = 0; i < 4; i++)
    {
        ll ci = si + d[i].first;
        ll cj = sj + d[i].second;

        if (valid(ci, cj) and !vis[ci][cj])
        {
            DFS(ci, cj);
        }
    }
}

int main()
{
    ll t;
    cin >> t;

    for (ll i = 1; i <=t; i++)
    {
        cin >> n >> m;

        memset(vis, false, sizeof(vis));

        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                mat[i][j] = c;

                if (c == '#')
                    vis[i][j] = true;
                if (c == '@')
                    si = i, sj = j;
            }
        }
        cnt = 0;
        DFS(si, sj);
        cout << "Case "<< i <<": " << cnt << endl;
       
    }

    return 0;
}