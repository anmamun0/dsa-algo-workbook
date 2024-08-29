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
    // Total  Space COmplexity = O(N);

    // Time
    // Weast Time Complixity  = O(N^2);
    // Best/Avarase Complixity = O(N^2);

    int size = v.size(); 

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }

    for (int c : v)
    {
        cout << c << " ";
    }

    return 0;
}