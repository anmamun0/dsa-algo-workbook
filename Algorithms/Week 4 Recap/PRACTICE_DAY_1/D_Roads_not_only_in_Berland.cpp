#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 10;
int par[H];
int grp[H];
void DSU_initialize(int N)
{
    for (int i = 1; i <= N; i++)
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

    if(grp[la] > grp[lb])
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
    int N;
    cin>>N;
    DSU_initialize(N);
    
    vector<pair<int, int>> cross;
    vector<pair<int, int>> creat;

    for (int i = 1; i <=N-1; i++)
    {
        int a, b;
        cin >> a >> b;

        int la = find(a);
        int lb = find(b);

        if(la == lb)
        {
            cross.push_back({a, b});
        }
        else
        {
            Union(a, b);
        }
    }
    cout << cross.size() << endl;

    for (int i = 2; i <= N; i++)
    {
        int la = find(1);
        int li = find(i);
        if(la != li)
        {
            creat.push_back({1, i});
            Union(1, i);
        }
    }

    if(creat.size() == cross.size())
    {
        for (int i = 0; i < cross.size(); i++)
        {
            cout << cross[i].first << " " << cross[i].second << " " << creat[i].first << " " << creat[i].second << endl;
        }
    }

        return 0;
}


