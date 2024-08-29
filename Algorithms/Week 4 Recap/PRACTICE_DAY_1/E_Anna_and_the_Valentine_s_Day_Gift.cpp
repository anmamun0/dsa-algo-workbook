#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, M;
        cin >> N >> M;

        int mx = INT_MIN;
        vector<int> love;
        
        for (int i = 0; i < N;i++)
        {
            int a;
            cin >> a;
            love.push_back(a);
            mx = max(mx, a);
        }



    }



    return 0;
}