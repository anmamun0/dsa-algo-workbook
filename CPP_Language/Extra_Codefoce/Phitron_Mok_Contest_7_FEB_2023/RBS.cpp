#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cross = 0;
        for (int i = 0; i<n; i++)
        {
            if(s[i]=='(')
                cross++;
            else if(s[i]==')')
                cross--;
        }

        cross == 0 ? cout << "Possible\n" : cout << "Impossible\n";

    }

    return 0;
}