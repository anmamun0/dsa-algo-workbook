#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<long long int> ar(N);
    for (int i = 0; i < N; i++)
    {
        cin >> ar[i];
    }

    vector<long long int> pre(N);
    pre[0] = ar[0];

    for (int i = 1; i < N; i++)
    {
        pre[i] = ar[i] + pre[i - 1];
    }
    for (auto it = pre.end()-1; it >= pre.begin(); it--)
    {
        cout << *it << " ";
    }
    
    

    return 0;
}