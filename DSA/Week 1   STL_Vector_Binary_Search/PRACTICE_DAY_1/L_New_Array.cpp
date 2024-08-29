#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> array1(N);
    vector<int> array2(N);
    for (int i = 0; i < N; i++)
    {
        cin >> array1[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> array2[i];
    }

    array2.insert(array2.end(), array1.begin(),array1.end());
    for (int i = 0; i < N+N; i++)
    {
        cout << array2[i] << " ";
    }
    

    return 0;
}