#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N;      // Maxsize 10^3;
    cin >> N;
    for (int i = 1; i <= N; i++) // O(N*N) Complexity 
    {
        for (int j = 1; j <= N;j++){
            cout << "Hello_World" << endl;
        }
    }

    for (int i = 1; i <= N; i++) // O(N*N) Complexity 
    {
        for (int j = i ; j <= N;j++){
            cout << "Hello_World" << endl;
        }
    }
    
    return 0;
}