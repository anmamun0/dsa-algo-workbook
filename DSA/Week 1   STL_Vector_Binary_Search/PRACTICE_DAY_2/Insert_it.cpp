#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M, value;

    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    cin >> M;
    vector<int> b(M);
    for (int i = 0; i < M; i++)
    {
        cin >> b[i];
    }

    cin >> value;
    a.insert(a.begin()+value, b.begin(),b.end());

    for (int i = 0; i < N+M; i++)
    {
        cout << a[i] << " ";

    }
    

    return 0;
}