#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int ar[N];

    for (int i = 0; i < N; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + N);

    while (M--)
    {
        int x;
        cin >> x;

        int L = 0, R = N - 1;
        bool flag = false;

        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (ar[mid] == x)
            {
                flag = true;
                break;
            }
            else if (x > ar[mid])
            {
                L = mid + 1;
            }
            else
            {
                R = mid - 1;
            }
        }

        (flag == true) ? cout << "found" << endl : cout << "not found" << endl;
    }

    return 0;
}
/*INPUT:            OUTPUT:
5 3                     found
1 5 4 3 2               found
5                       not found
3
6
*/