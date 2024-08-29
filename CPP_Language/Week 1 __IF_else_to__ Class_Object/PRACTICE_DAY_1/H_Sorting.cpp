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
    
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i; j < N;j++){
            if (array[i] > array[j])
            {
                swap(array[i], array[j]);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << array[i]<<" ";
    }
    
    return 0;
}