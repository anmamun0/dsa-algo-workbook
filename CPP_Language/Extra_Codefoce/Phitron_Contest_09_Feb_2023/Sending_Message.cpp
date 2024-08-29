#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string no, msg;
    while(cin >> no >> msg)
    {
        sort(no);
        sort(msg);

        map<char, int> mp_no;
        map<char, int> mp2_msg;

        for (int i = 0; i < no.size();i++)
            mp_no[no[i]]++;

        for (int i = 0; i < msg.size();i++)
            mp2_msg[msg[i]]++;

        set<char> st;
        for (int i = 0; i < msg.size();i++)
            st.insert(msg[i]);

        bool chack = true;

        for(auto c:st)
        {
            if(mp_no[c]<mp2_msg[c])
            {
                chack = false;
                break;
            }
        }
        (chack) ? cout << "Possible\n" : cout << "Impossible\n";
    }

    return 0;
}