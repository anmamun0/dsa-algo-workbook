#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> ar(N);

    for (int i = 0; i < N; i++)
    {
        cin >> ar[i];
    }
    while (Q--)
    {
        long long int count = 0;

        int L, R;
        cin >> L >> R;
        for (int i = L-1 ; i <= R-1; i++)
        {
            count += ar[i];
        }
        cout << count << endl;
    }
    
    

    return 0;
}