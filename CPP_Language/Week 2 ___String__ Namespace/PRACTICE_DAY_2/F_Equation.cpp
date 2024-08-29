#include <bits/stdc++.h>
using namespace std;
long long int F_Equation(int n, int x)
{
    if (x == 1)
        return 0;

    long long int result = F_Equation(n, x - 1);

    if (x % 2 == 0)
    {
        double T = pow(n * 1.0, x * 1.0);
        return (long long)int(result += int(T));
    }
    else
    {
        return result;
    }
}
int main()
{
    int N, X;
    cin >> N >> X;

    long long int fun = F_Equation(N, X);
    cout << fun;
    return 0;
}