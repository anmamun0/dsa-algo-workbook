#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

        int current_idx = v.size() - 1;
        while (current_idx != 0) // complexity = O(Nlog(N));
        {
            int parent_idx = (current_idx - 1) / 2;
            if (v[parent_idx] < v[current_idx])
                swap(v[parent_idx], v[current_idx]);
            else
                break;
            current_idx = parent_idx;
        }
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}