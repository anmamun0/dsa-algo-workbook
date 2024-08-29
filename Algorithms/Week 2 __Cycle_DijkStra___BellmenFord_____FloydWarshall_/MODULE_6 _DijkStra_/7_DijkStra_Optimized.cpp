#include <bits/stdc++.h>
using namespace std;
const int H = 100;
vector<pair<int, int>> mat[H];
int dis[H];
class cmp
{
    public:
    bool operator()(pair<int,int> a, pair<int,int>b)
    {
        return a.second > b.second;
    }
};
void DijkStra(int src){
    priority_queue<pair<int, int>,vector<pair<int,int>>,cmp> pq;
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
            int childNode = child.first;
            int childCost = child.second;
            //des(u)+ des(u,v) < des(v)
            if(cost+childCost < dis[childNode]){
                //path relax
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    int N,e;
    cin >> N >> e;

    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        mat[a].push_back({b, c});
        mat[b].push_back({a, c});
    }

    for (int i = 0; i < N; i++){
        dis[i] = INT_MAX;
    }

    DijkStra(0);

    for (int i = 0; i < N; i++){
        cout << i << " -> " << dis[i] << endl;
    }

        return 0;
}



/*
Input:
5 8
0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 2 1

Output:
0 -> 0
1 -> 6
2 -> 5
3 -> 4
4 -> 9

*/