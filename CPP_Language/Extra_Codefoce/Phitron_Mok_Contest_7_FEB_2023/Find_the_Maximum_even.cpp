#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    priority_queue<int> even_number;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            even_number.push(v[i]);
    }

    sort(v.begin(), v.end(), greater<int>());

    priority_queue<int> pq;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sumation = v[i] + v[j];
            if (sumation % 2 == 0)
                pq.push(sumation);
        }
    }

    int mx_even = 0;
    int mx_sum = 0;

    if(!even_number.empty())
        mx_even = even_number.top();
    if(!pq.empty())
        mx_sum = pq.top();

    cout << max(mx_even, mx_sum) << endl;


return 0;
}