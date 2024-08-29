#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    list<int> l;
    while (N--)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    cout << *next(l.begin(), 3) << endl;

    int sz = l.size();

    for (int i = 0; i < sz; i++)
    {
        l(i)=1;

    }
    

    return 0;
}