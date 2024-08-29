#include <bits/stdc++.h>
using namespace std;
int main()
{
    int level,x;
    cin>>level;

    set<int> s;

    int p;
    cin >> p;
    while(p--)
        cin >> x, s.insert(x);

    int q;
    cin>>q;
    while(q--)
        cin >> x, s.insert(x);

    ((s.size() == level)) ? cout << "I become the guy." : cout << "Oh, my keyboard!";

    // int ar[p];
    // for(int &x:ar)
    //     cin >> x;

    return 0;
}