#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N, Q;
    cin >> N >> Q;

    long long int ar[N];
    for (int i = 0; i < N; i++)
    {
        cin >> ar[i];
    }

    // Prifix_Sum----------
    long long int pre[N];
    pre[0] = ar[0];
    for (int i = 1; i < N; i++)
    {
        pre[i] = ar[i] + pre[i - 1];
    }

    while (Q--)
    {
        long long int L, R;
        cin >> L >> R;
        L--;
        R--;

        long long int sum;
        if (L == 0)
        {
            sum = pre[R] - 0;
        }
        else
        {
            sum = pre[R] - pre[L - 1];
        }
        cout << sum << endl;
    }
    return 0;
}

/*  INPUT:              OUTPUT:
6 3                         12
6 4 2 7 2 7                 18
1 3                         28
3 6
1 6
*/