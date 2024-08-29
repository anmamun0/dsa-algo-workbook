#include <bits/stdc++.h>
using namespace std;
vector<int> mat[10005];
bool visit[10005];
int aa = 0;
void DFS(int src){

    visit[src] = true;
    for(int child:mat[src]){
        if(visit[child] == false){
            DFS(child);
        }
    }

}
int main()
{
    int N, e;
    cin >> N >> e;
    while(e--){
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    memset(visit, false, sizeof(visit));

    int c = 0;
    for (int i = 0; i < N;i++){
        if(visit[i]==false){
            DFS(i);
            aa++;
        }
        c++;

    }
        cout << aa;

    return 0;
}