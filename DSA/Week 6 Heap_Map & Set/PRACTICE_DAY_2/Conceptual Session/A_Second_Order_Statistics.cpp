#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, x;
    set < int>s;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        s.insert(x);
    }
    if(s.size() <2){
        cout << "NO" << endl;
        return 0;
    }

    auto it = s.begin();
    advance(it, 1);
    cout << *it << endl;

    return 0;
}