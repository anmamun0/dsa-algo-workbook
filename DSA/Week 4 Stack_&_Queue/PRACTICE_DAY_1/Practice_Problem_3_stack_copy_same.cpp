#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        st.push(x);

    }

    stack<int> stCopy;
    while(!st.empty()){
        stCopy.push(st.top());
        st.pop();
    }

    while (!stCopy.empty())
    {
        cout << stCopy.top() << " ";
        stCopy.pop();
    }
    

    return 0;
}