#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, e;
    cin >> N >> e;

    int mat[N][N];
    memset(mat, 0, sizeof(mat));

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // Undirected Connection
        mat[a][b] = 1;
        mat[b][a] = 1; // Directed Connection this line will remove;
    }

    // for (int i = 0; i < N; i++){
    //     for (int j = 0; j< N; j++){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    if(mat[3][4] == 1)
        cout << "Yes! Connection ache";
    else
        cout << " No Connection";

    return 0;
}