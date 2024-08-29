#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> v;
    while (N--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // space
    // Auxillary Space COmplexity = O(1);
    // Total  Space COmplexity = O(N^2);

    // Time
    // Weast Time Complixity  = O(N^2);
    // Best/Avarase Complixity = O(N);

    // best case will be when array already sorted assending order;

    int size = v.size();

    for (int i = size - 2; i >= 0; i--)
    {
        bool swaped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swaped = 1;
                swap(v[j], v[j + 1]);
            }
        }
        // For already sorted or Best case
        if (swaped == 0)
        {
            break;
        }
    }

    for (int c : v)
    {
        cout << c << " ";
    }

    return 0;
}