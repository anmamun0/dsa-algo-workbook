#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int Top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.empty() == 0)
            return true;
        else
            return false;
    }
};
int main()
{

    myStack stack;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stack.push(x);
    }
    while (!stack.empty())
    {
        cout << stack.Top() << endl;
        stack.pop();
    }

    return 0;
}