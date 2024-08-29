#include <bits/stdc++.h>
using namespace std;
const int H = 1000;
vector<pair<int, int>> mat[H];
int dis[H];

void Dijkstra(int src)
{
    priority_queue<pair<int, int>> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while(!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;
        for(pair<int,int> child: mat[node])
        {
            int child_node = child.first;
            int child_cost = child.second;
            if(cost+child_cost<dis[child_node])
            {
                dis[child_node] = cost + child_cost;
                pq.push({child_node, dis[child_node]});
            }
        }
    }
}
int main()
{
    int N, src, des;
    cin >> N >> src >> des;
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            int a;
            cin >> a;
            if(i!=j and a>=0)
            {
                mat[i].push_back({j, a});
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        dis[i] = INT_MAX;
    }
    Dijkstra(src);

    if(dis[des] == INT_MAX)
        cout << "-1" << endl;
    else
        cout << dis[des] << endl;

    return 0;
}