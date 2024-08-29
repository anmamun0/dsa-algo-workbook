#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<pair<int, ll>> mat[100010];
ll des[100010];
class cmp
{
    public:
    bool operator()(pair<int,ll> a, pair<int,ll>b)
    {
        return a.second > b.second;
    }
};
void DiskStra(int src)
{
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, cmp > pq;
    pq.push({src, 0});
    des[src] = 0;
    while(!pq.empty())
    {
        pair<int, ll> parent = pq.top();
        pq.pop();
        int node = parent.first;
        ll cost = parent.second;
        for(auto child: mat[node])
        {
            int cnode = child.first;
            ll ccost = child.second;
            if(cost+ccost < des[cnode])
            {
                des[cnode] = cost + ccost;
                pq.push({cnode, des[cnode]});
            }
        }
    }
}

int main()
{
    int N, e;
    cin >> N >> e;
    while(e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        mat[a].push_back({b, c});

    }

    int src, T;
    
    cin >> src >> T;
    for(int i =1; i<=N; i++){
        des[i] = 10e17;
    }
    DiskStra(src);

    while(T--)
    {
        ll start, money;
        cin >> start >> money;
        if(des[start] <= money)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl;
    }

    return 0;
}