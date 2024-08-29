#include <bits/stdc++.h>
#define ll long long
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
 
    for (int i = 1; i <=n*2-1; i++)
    {
        for (int j = 1; j <=n * 2;j++)
        {
            if(i==j || (i+j == n*2))
                cout << i % 3;
            else
                cout << " ";
        }
        cout << '\n';
    }
   
        return 0;
}