#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        string s;
        getline(cin, s);
        int fast = 0, last = 0;

        int i = 0, j = 5;
        while (i!=3 && j!=2)
        {
            fast += s[i] - 48;
            last += s[j] - 48;
            i++;
            j--;
        }

        (fast == last) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    

    return 0;
}