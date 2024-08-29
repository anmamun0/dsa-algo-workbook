#include <bits/stdc++.h>
using namespace std;
const int H = 10e5;
vector< int > mat[H];
bool visit[H];
int parentArray[H];
bool Ans = false;

void DFS(int parent){
    cout << parent << endl;
    visit[parent] = true;
    
    for(int child:mat[parent])
    {
        if(visit[child] and  parentArray[parent] != child  ){
            Ans = true;
            cout << "Diceted : " << parent << " " << child << endl;

        } 
        if(!visit[child]){ 
            parentArray[child] = parent;
            DFS(child);
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
7 6
0 1
1 2
3 4
4 6
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
Diceted : 6 3
Diceted : 3 6
Cycle Detected


*/