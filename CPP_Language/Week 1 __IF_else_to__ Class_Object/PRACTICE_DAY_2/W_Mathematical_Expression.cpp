#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, ANS;
    char symbol, qual;
    cin >> A >> symbol >> B >> qual >> ANS;

    if (symbol == '+')
    {
        if (A + B == ANS)
        {
            cout << "Yes";
        }
        else
        {
            cout << A + B;
        }
    }
    else if (symbol == '-')
    {
        if (A - B == ANS)
        {
            cout << "Yes";
        }
        else
        {
            cout << A - B;
        }
    }

    else if (symbol == '*')
    {
        if (A * B == ANS)
        {
            cout << "Yes";
        }
        else
        {
            cout << A * B;
        }
    }

    return 0;
}