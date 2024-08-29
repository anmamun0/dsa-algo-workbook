#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int *fast = new int[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> fast[i];
    }
    int *second = new int[N];
    for (int i = 0; i < N; i++)
    {
        second[i] = fast[i];
    }
    delete[] fast;

    int M;
    cin >> M;

    fast = new int[M];

    for (int i = 0; i < N; i++)
    {
        fast[i] = second[i];
    }
    delete[] second;

    for (int i = N; i < M; i++)
    {
        cin >> fast[i];
    }

    for (int i = 0; i < M; i++)
    {
        cout << fast[i] << " ";
    }
    
    
    return 0;
}