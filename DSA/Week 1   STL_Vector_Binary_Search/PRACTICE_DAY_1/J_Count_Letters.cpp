#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s(1);
    cin >> s[0];

    vector<int> fre(26, 0);

    for (char c : s[0])
    {
        fre[int(c) - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] != 0)
        {
            cout << char(i + 97) << " : " << fre[i] << endl;
        }
    }

    return 0;
}