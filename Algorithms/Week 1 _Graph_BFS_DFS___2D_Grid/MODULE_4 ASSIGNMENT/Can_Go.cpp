#include <bits/stdc++.h>
using namespace std;
int N, M;
char mat[10005][10005];
bool visit[10005][10005];
bool road = false;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid (int i, int j){
    if(i<0 or j<0 or i>=N or j>=M or mat[i][j] =='#')
        return false;
    return true;
}
void DFS_2D_Grid(int si,int sj,int ei,int ej)
{
    if(ei == si and ej == sj) {
        road = true;
        return;
    }
    visit[si][sj]= true;
    for (int i = 0; i < 4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) and !visit[ci][cj]){
            DFS_2D_Grid(ci, cj,ei,ej);
        }
    }
}
int main()
{
    cin >> N >> M;

    int si = 0, sj = 0;
    int ei = 0, ej = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){

            cin >> mat[i][j];
            if (mat[i][j]== 'A'){
                si = i, sj = j;
            }
            if(mat[i][j] =='B'){
                ei = i, ej = j;
            }
        }
    }
    memset(visit, false, sizeof(visit));

    DFS_2D_Grid(si, sj,ei,ej);

    if(road)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}