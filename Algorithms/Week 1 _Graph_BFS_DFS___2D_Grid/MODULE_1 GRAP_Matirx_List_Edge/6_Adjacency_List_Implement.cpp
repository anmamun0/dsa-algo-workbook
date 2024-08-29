#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, e;
    cin >> N >>e;
    vector<int> mat[N];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a); // if directed graph this line will remove;
    }
    for(int x:mat[0]){
        cout << x << " ";
    }
    cout << endl;

    for (int i = 0; i < mat[0].size();i++){
        cout << mat[0][i]<<" ";
    }
        return 0;
}