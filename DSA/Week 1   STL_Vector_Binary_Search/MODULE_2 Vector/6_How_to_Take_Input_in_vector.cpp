#include <bits/stdc++.h>
using namespace std;
int main()
{
// 1 Way to input in vector -----------------------------
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for (int c:v){
    //     cout << c << " ";
    // }

// 2 Way to input in vector -----------------------------
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int c:v){
        cout << c << " ";
    }

        return 0;
}