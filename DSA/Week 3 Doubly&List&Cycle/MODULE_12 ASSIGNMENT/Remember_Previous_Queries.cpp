#include <bits/stdc++.h>
using namespace std;

void normal_revrse(list<int> Node)
{
    cout << "L -> ";
    for (int c : Node)
    {
        cout << c << " ";
    }
    cout << endl;
    Node.reverse();
    cout << "R -> ";
    for (int c : Node)
    {
        cout << c << " ";
    }
    cout << endl;
    Node.reverse();
}
int main()
{
    list<int> Node;
    int x;
    cin >> x;
    while (x--)
    {
        int p, val;
        cin >> p >> val;
        if (p == 0)
        {
            Node.push_front(val);
            normal_revrse(Node);
        }
        else if (p == 1)
        {
            Node.push_back(val);
            normal_revrse(Node);
        }
        else if (p == 2)
        {
            int sz = Node.size();
            if (val == 0)
            {
                if (sz > -1)
                {
                    Node.pop_front();
                    normal_revrse(Node);
                }
            }
            else if (val == sz - 1)
            {
                if (sz > -1)
                {
                    Node.pop_back();
                    normal_revrse(Node);
                }
            }
            else if (val > 0 && val < sz)
            {
                Node.erase(next(Node.begin(), val));
                normal_revrse(Node);
            }
            else
            {
                normal_revrse(Node);
            }
        }
        else
        {
            normal_revrse(Node);
        }
    }

    // list<int> Node = {10, 50, 80, 40};
    // cout << Node.size() << endl;//4
    // normal_revrse(Node);
    // for (int c : Node){
    //     cout << c << " ";
    // }
    // cout << endl;
    // Node.reverse();
    // for (int c : Node){
    //     cout << c << " ";
    // }
    // cout << endl;

    // Node.reverse();
    // for (int c : Node){
    //     cout << c << " ";
    // }
    return 0;
}