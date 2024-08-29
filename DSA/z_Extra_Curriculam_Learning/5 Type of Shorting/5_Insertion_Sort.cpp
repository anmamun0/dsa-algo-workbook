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

    N = v.size();

    for (int i = 0; i < N ; i++)
    {
        for (int j = i ; j >= 1; j--)
        {
            if (v[j] < v[j - 1])
            {
                swap(v[j], v[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

     for (int c : v)
    {
        cout << c << " ";
    }

    return 0;
}


    // space
    // Auxillary Space COmplexity = O(N);
    // Total  Space COmplexity = O(N);

    // Time
    // Weast Time Complixity  = O(N^2);
    // Best/Avarase Complixity = O(N^2);