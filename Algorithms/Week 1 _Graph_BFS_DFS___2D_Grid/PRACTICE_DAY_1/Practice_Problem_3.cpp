#include <bits/stdc++.h>
using namespace std;
vector<int> mat[10005];
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
    int node;
    cin >> node;
    cout << mat[node].size() << endl;

    return 0;
}