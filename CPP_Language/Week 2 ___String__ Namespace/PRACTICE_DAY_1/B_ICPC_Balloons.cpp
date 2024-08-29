#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        int M;
        cin >> M;
        char s[M];

        int i = 0;
        while (i != M)
        {
            cin >> s[i];
            i++;
        }
// second section--------------
        int ar[26] = {0}, j = 0;
        while (j != M)
        {
            int val = s[j] - 65;
            ar[val]++;
            j++;
        }
// 3rd section--------------

        int ans = 0;
        for (int k = 0; k < 26; k++)
        {
            if (ar[k] != 0)
            {
                ans += 2;
                if (ar[k] > 1)
                {
                    for (int x = 1; x < ar[k]; x++)
                    {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}