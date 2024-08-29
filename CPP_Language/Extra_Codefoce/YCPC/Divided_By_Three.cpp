#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;

        int result = 0;
        
        for(char c:s){
            result += int(c) - 48;
        }

        if (result % 3 == 0)
        {
            cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }
    return 0;
}