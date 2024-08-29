#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> ar[i];
    }
    int my_min = ar[0];
    int my_max = ar[0];
    for (int i = 0; i < 3; i++)
    {
        my_max = max(my_max, ar[i]);
        my_min = min(my_min, ar[i]);
    }
    cout << my_min << " " << my_max << endl;
    return 0;
}