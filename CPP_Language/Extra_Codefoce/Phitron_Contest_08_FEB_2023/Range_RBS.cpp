#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;
    string se;
    cin >> se;

    int T;
    cin >> T;
    while(T--)
    {
        stack<char> contest;
        int a, b;
        cin >> a >> b;

        if((a-b+1)%2 == 0 and (se[a] != '(') and (se[b] += '('))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}