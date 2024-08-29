#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int> num;
        N *= 2;
        while(N--)
        {
            int c;
            cin >> c;
            num.push_back(c);
        }
        sort(num.begin(), num.end());

        ll sum = 0;
        for (int i = 0; i < num.size()-1; i++)
        {
            if(i%2 == 1) continue;
            sum += min(num[i], num[i + 1]);
        }

        cout << sum << endl;
    }

    return 0;
}