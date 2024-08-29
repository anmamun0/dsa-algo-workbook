#include <bits/stdc++.h>
using namespace std;
int n, m;
char mat[20][20];
bool visit[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void DFS_2D_Printing(int si, int sj) // Time Complexity = O(n*m) // O(N)// n*m = ALL NODE ;
{
    cout << si << " " << sj << endl;
    visit[si][sj] = true;

    for (int i = 0; i < 4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) == true && visit[ci][cj]==false){
            DFS_2D_Printing(ci, cj);
        }
        
    }
} 
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(visit, false, sizeof(visit));
    DFS_2D_Printing(si, sj);

    return 0;
}

/*
Input:
3 4
....
....
....
0 0

Output:
0 0
0 1
0 2
0 3
1 3
1 2
1 1
1 0
2 0
2 1
2 2
2 3
*/