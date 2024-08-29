#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    long long int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    
    sort(array, array + N);

    for (int i = 0; i < N; i++)
    {
        if(i!=N-1){
        cout << array[i] << " ";
        }
        else{
        cout << array[i];

        }
    }
    cout << endl;
    sort(array, array + N,greater<int>());

    for (int i = 0; i < N; i++)
    {
        if(i!=N-1){
        cout << array[i] << " ";
        }
        else{
        cout << array[i];

        }
    }
    
    

    return 0;
}