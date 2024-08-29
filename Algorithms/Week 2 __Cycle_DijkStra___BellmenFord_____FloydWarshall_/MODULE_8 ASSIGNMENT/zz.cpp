#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll INF = 1e18;
ll adj[200][200];

int main() {
    int n, e;
    cin >> n >> e;


    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            adj[i][j] = INF;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], c); 
    }
    for (ll k = 1; k <=n; k++) {
        for (ll i = 1; i <=n; i++) {
            for (ll j = 1; j <=n; j++) {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--) {
        ll src, dest;
        cin >> src >> dest;
        if (adj[src][dest] == INF) {
            cout << "-1"<<endl; 
        } else {
            cout << adj[src][dest] << endl;
        }
    }
    return 0;
}