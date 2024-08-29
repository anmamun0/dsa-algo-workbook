#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++){ // O(N) Complexity
        int x = i;
        while (x>0)             // O(log(N)) Complexity;
        {
            int digit = x % 10;
            cout << digit << " ";
            x /= 10;
        }
        cout << endl;
    }
                        // O(N) and O(log(N)) together ==  O(Nlog(N))
        return 0;
}