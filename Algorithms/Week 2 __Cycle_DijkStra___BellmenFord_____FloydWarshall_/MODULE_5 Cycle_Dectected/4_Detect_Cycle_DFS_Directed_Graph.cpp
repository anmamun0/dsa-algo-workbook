#include <bits/stdc++.h>
using namespace std;
const int H = 10e5;
vector< int > mat[H];
bool visit[H];
bool path_Visit[H];
bool Ans = false;

void DFS(int parent)
{
    // cout << parent << endl;
    visit[parent] = true;
    path_Visit[parent] = true;

    for(int child:mat[parent])
    {
        if(path_Visit[child])
        {
            Ans = true;
            cout << "cycle deteced node = " << child << endl;
        }
        if(!visit[child])
        { 
            DFS(child);
        }
    }
    path_Visit[parent] = false;
} 
int main()
{
    int N, e;
    cin>>N>>e;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
    }
    memset(visit, false, sizeof(visit));
    memset(path_Visit, false, sizeof(path_Visit));

    for (int i = 0; i < N;i++)
    {
        if(!visit[i]){
            DFS(i);
        }
    }

    if(Ans)
        cout << "Cycle Detected" << endl;
    else
        cout << "Cycle Not Dectected" << endl;

        return 0;
}

/*
INput:
7 8
5 6
4 5
0 4
0 6
1 0
1 2
2 3
3 1

Output:
cycle deteced node = 1
Cycle Detected



*/