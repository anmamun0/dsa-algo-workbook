#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    // ASCENDING ORDER SORT(); sort(staring Pointer, ending Pointer);
    sort(array, array + N); // 
    // sort(array, array + 3); fast 3 ta porjonto sort korba;

    for (int i = 0; i < N; i++)
    {
        cout << array[i]<<" ";
    }
    cout << endl;

    // DECENDING ORDER SORT(); sort(staring, ending, greater<Data_type>());
    sort(array, array + N, greater<int>());

    for (int i = 0; i < N; i++)
    {
        cout << array[i]<<" ";
    }

    return 0;
}