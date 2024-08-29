#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {50, 45, 30, 40, 42, 32, 25, 10, 35};

    int x;
    cin >> x;
    v.push_back(x);

    int current_idx = v.size() - 1;
    while (current_idx != 0) // complexity = O(Nlog(N));
    {
        int parent_idx = (current_idx - 1) / 2;
        if(v[parent_idx]<v[current_idx])
            swap(v[parent_idx], v[current_idx]);
        else
            break;
        current_idx = parent_idx;
    }

    for(int val : v){
        cout << val << " ";
    }

    return 0;
}