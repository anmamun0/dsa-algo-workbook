#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            mx = max((c - 'a')+1, mx);
        }
        cout << mx<<endl;
    }

    return 0;
}