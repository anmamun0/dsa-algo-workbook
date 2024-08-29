#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;  // Maxsize 10^14;
    cin >> N;
    for (int i = 1; i <=sqrt(N); i++)   // O(sqrt(N)) Complexity
    {
        if(N%i==0){
            cout << i << " ";

            if(N/i != i)
                cout << N / i << endl;
        }
    }

    // same this loop too; thats different way : i*i <= N  // i<=sqrt(N);
    for (int i = 1; i*i <=N; i++)   // O(sqrt(N)) Complexity
    {
        if(N%i==0){
            cout << i << " ";

            if(N/i != i)
                cout << N / i << endl;
        }
    }


    return 0;
}