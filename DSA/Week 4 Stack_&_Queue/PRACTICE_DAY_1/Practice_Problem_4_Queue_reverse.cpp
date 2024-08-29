#include <bits/stdc++.h>
using namespace std;
int reverse_q(queue<int> q)
{
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        q.push(x);
    }
    
    reverse_q(q);

    return 0;
}