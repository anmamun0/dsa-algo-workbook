#include <bits/stdc++.h>
using namespace std;
int main()
{
    string chack = "EGYPT";
    string s;
    getline(cin, s);

    while ( s.find(chack) != -1)
    {
        s.replace(s.find(chack),5, " ");
    }

    cout << s;

    return 0;
}