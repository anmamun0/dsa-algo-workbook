#include <bits/stdc++.h>
using namespace std;
const int H = 1e6 + 10;
int par[H];
int grp[H];
void make(int v)
{
    par[v] = v;
    grp[v] = 1;
}
int find(int node)
{
    if (node = par[node])
        return node;
    return par[node] = find(par[node]);
}
void Union(int a, int b)
{
    int la = find(a);
    int lb = find(b);
    if (grp[la] > grp[lb])
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
    cin >> N;
    int e = N - 1;

    for (int i = 1; i <= N; i++)
    {
        make(i);
    }

    vector<int> road;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int la = find(a);
        int lb = find(b);
        if(la == lb){
            road.push_back(a);
            road.push_back(b);
        }
        else{
            Union(a, b);
        }
    }

    for(int c:road)
    {
        cout << c << ' ';
    }

    
    for (int i = 1; i <= N;i++)
    {
        if(par[i] == i){
            cout << i << " ";
        }
    }

        return 0;
}