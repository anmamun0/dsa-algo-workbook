#include <bits/stdc++.h>
using namespace std;
const int H = 1e6 + 10;
int par[H];
int grp[H];

void dsu_initialize(int N)
{
    for(int i = 1; i<=N; i++)
    {
        par[i] = -1;
        grp[i] = 1;
    }
}
int find(int node)
{
    if(par[node] == -1)
        return node;

    return par[node] = find(par[node]);
}
void Union(int a,int b)
{
    int la = find(a);
    int lb = find(b);

    if(grp[la]> grp[lb])
    {
        par[lb] = la;
        grp[la] += grp[lb];
    }
    else
    {
        par[la] = lb;
        grp[lb] += grp[la];
    }
}
int main()
{
    int N, e;
    cin >> N >> e;
    dsu_initialize(N);

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        int la = find(a);
        int lb = find(b);

        if(la != lb)
            Union(a, b);
    }

    vector<int>leaders;

    for(int i = 1; i<=N; i++)
    {
        leaders.push_back(find(i));
    }
    
    sort(leaders.begin(), leaders.end());
    leaders.erase(unique(leaders.begin(),leaders.end()), leaders.end());
    cout << leaders.size() - 1 << endl;

    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << leaders[i] << " " << leaders[i + 1] << endl;
    }

        return 0;
}