#include <bits/stdc++.h>
using namespace std;
int main()
{
    //AN.Mamun Approch
	ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, times;
        cin >> n >> times;
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if(a<=n and a>0)
                st.insert(a);
        }
        n - st.size() <= times ? cout << "YES\n": cout << "NO\n";
    }

    return 0;
}