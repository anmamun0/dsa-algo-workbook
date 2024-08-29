#include <bits/stdc++.h>
using namespace std;
const int H = 1e5 + 5;

int height[H];
int dp[H];

int frog(int i)
{
    if( i == 0)
        return 0;

        
    //jodi aga taka dekha feli, dekchi aga

    if(dp[i] != -1)
    {
        return dp[i];
    }

    int cost = INT_MIN;

    //way 1 = ak laa chole asbo ->
    cost = min(cost, frog(i - 1) + abs(height[i] - height[i - 1]));
    //way 2 = dui lafa chole asbo ->
    if(i>1)
        cost = min(cost, frog(i - 2) + abs(height[i] - height[i - 2]));

    return cost;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> height[i];
    }
    memset(dp, -1, sizeof(dp));

    cout << frog(n - 1);

    return 0;
}