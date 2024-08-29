#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  N;     // Maxsize 10^18;
    cin >> N;
    // while (N > 0) // O(logN) Complexity;
    // {
    //     int digit = N % 10;
    //     cout << digit << endl;
    //     N /= 10;
    // }

    
    // for (int i = 0; i < N; i++)// O(N) Complexity;
    // {
    //     cout << i << endl; 
    // }
    
    
    for (int i = 1; i <= N; i*=2)  // O(logN) Complexity;
    {
        cout << i << endl;
    }
    

    return 0;
}