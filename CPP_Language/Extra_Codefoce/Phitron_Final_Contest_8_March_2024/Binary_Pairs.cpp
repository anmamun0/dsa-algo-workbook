#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < s.size()-1;i++)
        {
            if(s[i]=='0' and s[i+1]=='1') cnt++;
            if(s[i]=='1' and s[i+1]=='0') cnt++;  
        }
        
        cout << cnt << endl;
    }

    return 0;
}