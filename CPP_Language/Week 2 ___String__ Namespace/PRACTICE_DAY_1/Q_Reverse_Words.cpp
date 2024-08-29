#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    int fastword = 1;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());

        if (fastword)
        {
            fastword = 0;
        }
        else
        {
            cout << " ";
        }

        cout << word;
    }

    return 0;
}