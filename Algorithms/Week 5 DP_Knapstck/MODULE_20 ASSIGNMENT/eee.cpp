#include <iostream>
#include <vector>
using namespace std;

int dp[1011][1011];

bool subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }
    if (dp[n][s] != -1)
        return dp[n][s];

    if (a[n - 1] <= s)
    {

        bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
        bool op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
    }
    else
    {
        bool op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op2;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, marks;
        cin >> n >> marks;

        int arr[n+1];

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        for (int i = 0; i <= 1009; i++)
        {
            for (int j = 0; j <= 1009; j++)
            {
                dp[i][j] = -1;
            }
        }

        int s = 1000 - marks;

        if (s == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (subset_sum(n, arr, s) == true){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}