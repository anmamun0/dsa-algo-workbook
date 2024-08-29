#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;      // Maxsize 10^7;
    cin >> N;
    int ar[N];
    for (int i = 0; i < N; i++)  //O(N) complexity
    {
        cin >> ar[i];
    }

    int s = 0;
    for (int i = 0; i < N; i++) // O(N) complexity
    {
        s += ar[i];
    }
    cout << s << endl;


    return 0;
}