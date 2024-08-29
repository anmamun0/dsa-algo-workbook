#include <bits/stdc++.h>
using namespace std;
const int H = 10e5;
vector< int > mat[H];
bool visit[H];

int parentArray[H];
bool Ans = false;
void BFS(int src){
    queue<int> q;
    q.push(src);
    visit[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        // cout << parent << endl;
        q.pop();
        for(int child:mat[parent])
        {
            if(visit[child] and parentArray[parent] != child){ //  Akhi node ar parent and children same jano nah hoy (parentArray[parent]!=chlid)
                Ans = true;
                cout << "Diceted : " << parent << " " << child << endl;
            }
            if(!visit[child] )
            {
                q.push(child);
                visit[child] = true;
                parentArray[child] = parent;
            }
        }
    }
    
}
 
int main()
{
    int N, e;
    cin>>N>>e;
    while(e--){
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    memset(visit, false, sizeof(visit));
    memset(parentArray, -1, sizeof(parentArray));

    for (int i = 0; i < N;i++){
        if(!visit[i]){
            BFS(i);
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
7 6
0 1
1 2
3 4
4 5
5 6
6 3

Output:
0
1
2
3
4
6
5
Cycle Detected


*/