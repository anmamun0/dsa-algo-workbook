#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;
    while (N--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int T;
    cin >> T;
    while (T--)
    {
        int com;
        cin >> com;

        if (com == 0)
        {
            int inserting;
            cin >> inserting;
            pq.push(inserting);
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (com == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (com == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}