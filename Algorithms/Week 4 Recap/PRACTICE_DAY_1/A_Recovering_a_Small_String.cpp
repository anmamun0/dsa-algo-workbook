 #include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, char> mp;
    char c = 'a';
    for (int i = 1; i <= 26; i++)
    {
        if (!mp.count(i))
        {
            mp.insert({i, c});
        }
        c++;
    }

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int spots = 2;

        string res = "";
        
        while (N > 0)
        {

            int temp = N - spots;
            N -= temp;
            if (temp > 26)
            {
                N += temp - 26;
                temp = 26;
            }
            res += string(1, mp[temp]);
            spots--;
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }

    return 0;
} 