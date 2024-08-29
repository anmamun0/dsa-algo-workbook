#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>> N;

    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];

    }
    int my_max = array[0];
    for (int i = 0; i < N; i++)
    {
        my_max = max(my_max, array[i]);
    }
    cout << my_max;

    return 0;
}