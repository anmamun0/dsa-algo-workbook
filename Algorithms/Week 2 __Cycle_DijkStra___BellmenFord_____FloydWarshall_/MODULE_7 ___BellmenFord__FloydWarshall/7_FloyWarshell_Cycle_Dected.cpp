#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int N, e;
    cin >> N >> e;
    ll adj[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }

    int k = 0;
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
                // cout << i <<" "<<k <<" "<< j << endl;
            }
        }
    }

    int cycle = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j and adj[i][j] != 0)
            {
                cycle = true;
                break;
            }
        }
    }

    if (cycle)
    {
        cout << "Cycle found. Not ans abalable" << endl;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (adj[i][j] == INT_MAX)
                {
                    cout << "INF\t\t";
                }
                else
                {
                    cout << adj[i][j] << "\t\t";
                }
            }
            cout << endl;
        }
    }
    return 0;
}

/*
Input:  Time Complexity O(V^3);
4 6
3 2 8
2 1 5
1 0 2
3 0 20
0 1 3
1 2 2

output:
AFTER
0		3		INF		INF
2		0		2		INF
INF		5		0		INF
20		INF		8		0
AFTER
0		3		5		INF
2		0		2		INF
7		5		0		INF
15		13		8		0

*/