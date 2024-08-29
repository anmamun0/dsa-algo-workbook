#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> vec(N);

    int fastword = 1;

    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];

        if (fastword)
            fastword = 0;
        else
            cout << " ";

        if (vec[i] <= 0)
        {
            cout << vec[i] * -1;
        }
        else if (vec[i] > 0)
        {
            cout << "1";
        }
    }

    return 0;
}