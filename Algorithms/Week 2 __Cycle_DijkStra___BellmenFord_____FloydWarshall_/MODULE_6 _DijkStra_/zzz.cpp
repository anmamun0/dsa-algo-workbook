@AN.Mamun
#include <bits/stdc++.h>
using namespace std;


class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    int dastination[10000];
    class cmp
    {
        public:
        bool operator()(pair<int,int>a,pair<int,int>b){
            return a.second> b.second;
        } 
    };
    void DijkStra(int src,vector<vector<int>>adj[])
    {
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
        pq.push({src,0});
        dastination[src] = 0;
        
        while(!pq.empty()){
            pair<int,int> parent = pq.top();
            pq.pop();
            int node = parent.first;
            int cost = parent.second;
            for(vector<int> child: adj[node]){
                int child_node = child[0];
                int child_cost = child[1];
                if(child_cost+cost < dastination[child_node]){
                    dastination[child_node] = child_cost+cost;
                    pq.push({child_node, dastination[child_node]});
                }
            }
        }
        
    }
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        for(int i =0; i<V;i++)
        {
            dastination[i] = INT_MAX;
        }
        DijkStra(S,adj);

        vector<int> bla_bla;
        
        for(int i =0; i<V; i++){
            bla_bla.push_back(dastination[i]);
        }
        
        return bla_bla;
        
    }
};



int main()
{
    

    return 0;
}