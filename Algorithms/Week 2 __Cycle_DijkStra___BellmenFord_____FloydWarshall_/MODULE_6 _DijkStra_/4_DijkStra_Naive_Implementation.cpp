#include <bits/stdc++.h>
using namespace std;
const int H = 100;
vector<pair<int, int>> mat[H];
int dis[H];
void DijkStra(int src){
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while(!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int node = parent.first;
        int cost = parent.second;

        // for (int i = 0; i < mat[node].size(); i++){
        //     pair<int, int> child = mat[node][i];
        // }

        for(pair<int,int> child: mat[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if(cost+childCost < dis[childNode]){
                //path relax
                dis[childNode] = cost + childCost;
                q.push({childNode, dis[childNode]});
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
    // memset(dis, INT_MAX, sizeof(dis));
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