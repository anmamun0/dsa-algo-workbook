#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string bin;
        cin >> bin;

        int count = 0;

        stack<char> st;

        for (char c : bin)
        {
                if (!st.empty() && c == '0' && st.top() == '0')
                {
                    if(st.top()==0){
                        count++;
                    }
                    count++;
                    continue;
                }
    
            else
            {
                st.push(c);
            }
        }

        if (count == 0)
        {
            if (st.top() == '0')
            {
                count++;
            }
        }

        cout << count << endl;
        // cout << bin << endl;
    }

    return 0;
}