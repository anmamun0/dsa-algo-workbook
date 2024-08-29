#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int k = 0; k < N ;k++) {
        
        int N, s;
        cin >> N >> s;
        int array[N];

        for (int i = 0; i < N; i++)
        {
            cin >> array[i];
        }
        int chack = 0;

        for (int i = 0; i < N - 2; i++)
        {
            for (int j = i + 1; j < N - 1; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (array[i] + array[j] + array[k] == s)
                    {
                        chack = 1;
                        break;
                    }
                }
                if (chack)
                {
                    break;
                }
            }
            if (chack)
            {
                break;
            }
        }

        if (chack == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}