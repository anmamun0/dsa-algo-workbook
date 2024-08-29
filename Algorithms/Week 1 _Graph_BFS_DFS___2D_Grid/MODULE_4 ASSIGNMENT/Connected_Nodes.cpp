#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, e;
    cin >> N >> e;
    vector<int> mat[N + 10];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int T;
    cin >> T;
    while (T--)
    {
        int nodes;
        cin >> nodes;
        priority_queue<int> pq;
        for (int child : mat[nodes])
        {
            pq.push(child);
        }
        if (pq.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            while (!pq.empty())
            {
                cout << pq.top() << " ";
                pq.pop();
            }
            cout << endl;
        }
    }

    return 0;
}