#include <bits/stdc++.h>
using namespace std;
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visit[V+5];
        
        memset(visit,false,sizeof(visit));

        queue<int>q;
        q.push(0);
        visit[0] = true;
        
        vector<int>mylevels;
        while(!q.empty()){
            int par = q.front();
            q.pop();
            mylevels.push_back(par);

            for(int child: adj[par]){
                if(!visit[child]){
                    q.push(child);
                    visit[child] = true;
                }
            }
        }
        return mylevels;
        
        
        
    }
int main()
{
    

    return 0;
}