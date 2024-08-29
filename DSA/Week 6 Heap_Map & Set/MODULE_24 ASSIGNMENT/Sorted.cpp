#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        set<long long int> myset;
        while (N--)
        {
            int x;
            cin >> x;
            myset.insert(x);
        }
        for (auto it = myset.begin(); it!=myset.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;

    }
    

    return 0;
}