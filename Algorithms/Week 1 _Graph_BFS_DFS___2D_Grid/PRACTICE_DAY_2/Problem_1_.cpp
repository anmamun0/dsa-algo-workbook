#include <bits/stdc++.h>
using namespace std;
vector<int> mat[10005];
bool visit[10005];
int aa = 0;
void DFS(int src){

    // cout << src << endl;
    aa++;
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
    int src;
    cin >> src;
    memset(visit, false, sizeof(visit));
    DFS(src);
    cout << aa;

    return 0;
}