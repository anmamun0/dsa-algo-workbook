#include <bits/stdc++.h>
using namespace std;
vector<int> mat[10005];
bool visit[105];
int aa = 0;
int counting[100];

void DFS(int src,int main_src){
    counting[main_src]++;
    visit[src] = true;
    for(int child:mat[src]){
        if(visit[child] == false){
            DFS(child,main_src);
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
    memset(counting, 0, sizeof(counting));

    int c = 0;
    for (int i = 0; i < N;i++){
        if(visit[i]==false){
            DFS(i,i);
        }
        c++;

    }
    
    set<int> nodes;

    for(int c:counting){
        if(c!=0){
            nodes.insert(c);
        }
    }
    for(int c:nodes){
        cout << c << ' ';
    }
   

    return 0;
}