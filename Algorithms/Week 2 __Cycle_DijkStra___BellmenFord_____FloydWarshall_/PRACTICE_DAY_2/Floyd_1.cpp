#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll adj[10010][10010];

int main()
{

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N;j++)
        {
            adj[i][j] = INT_MAX;
        }
        
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N;j++)
        {
            int a;
            cin >> a;
            if(a!=100)
            {
                adj[i][j] = a;
            }
            
        }
    }
    for (int k = 1; k <= N;k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if(adj[i][k]+adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N;j++)
            {
                if(adj[i][j] == INT_MAX){
                    cout << "INF\t";
                }
                else{
                    cout << adj[i][j] << " ";
                }
            }
            cout << endl;
        }

        return 0;
}