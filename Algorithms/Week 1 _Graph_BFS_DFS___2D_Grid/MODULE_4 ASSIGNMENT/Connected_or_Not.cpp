#include <bits/stdc++.h>
using namespace std;
bool valid(int i, int j)
{
        return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.';
}
int main()
{
    int N,e;
    cin >> N >> e;
    int mat[N+10][N+10];
    memset(mat, 0, sizeof(mat));

    while(e--){
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[a][a] = 1;
        mat[b][b] = 1;
    }
    int T;
    cin >> T;
    while(T--){
        int a, b;
        cin>>a>>b;
        if(a>N or b>N){
            cout << "NO" << endl;
            continue;
        }
        if(mat[a][b] == 1){
            cout << "YES" << endl;
        }
        else if(a==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}