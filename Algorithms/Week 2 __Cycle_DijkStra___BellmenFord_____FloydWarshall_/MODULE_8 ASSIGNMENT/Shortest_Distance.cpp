#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll mat[110][110];
int main()
{
    int N, e;
    cin >> N >> e;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            mat[i][j] = 10e17;
            if (i == j)
            {
                mat[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;

        if (c <= mat[a][b])
        {
            mat[a][b] = c;
        }
    }

    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }


    int T;
    cin >> T;
    while(T--)
    {
        int st, end;
        cin >> st >> end;
        if(mat[st][end] == 10e17){
            cout << -1 << endl;
        }
        else{
            cout<< mat[st][end] << endl;
        }
    }

    return 0;
}