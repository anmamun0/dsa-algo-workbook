#include <bits/stdc++.h>
using namespace std;
int* sort_it(int n)
{
    int* array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n,greater<int>());
    return array;
}
int main()
{
    int N;
    cin >> N;

    int *x  = sort_it(N);
    for (int i = 0; i < N; i++)
    {
        if(i!=N-1){
            cout << x[i] <<" ";
        }
        else{
            cout << x[i];
        }
    }
    

    return 0;
}