#include <bits/stdc++.h>
#define ll long long
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int M, N;
const int H = 1e4 + 10;
int mat[H][H];
bool visit[H][H];
int road;
vector<pair<int,int>> d = {{-1,1}, {-1,-1}, {1,-1}, {1,1}};
bool valid(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
        return false;
    return true;
}
void BFS(int si,int sj,int ei,int ej)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        road += mat[a][b];
        q.pop();

        if(ei==a and ej == b)break;

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && visit[ci][cj] == false)
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
            }
        }
    }
}

int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--)
    {
        cin >> M>> N;

        int si = 0, sj = 0;
        int ei = 0, ej = 0;
        memset(visit, false, sizeof(visit));

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N;j++)
            {
                cin >> mat[i][j];
                if(mat[i][j]==-1) si = i, sj = j;
                if(mat[i][j] == -2) ei = i, ej = j;
                if(mat[i][j]== 0) visit[i][j] = true;
            }
        }
        
        road = 0;
        BFS(si, sj, ei, ej);
        if(visit[ei][ej])  cout<<road+3<<endl;
        else cout << "Impossible" << endl;
    }

    return 0;
}