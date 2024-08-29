#include <bits/stdc++.h>
using namespace std;
// int fibo(int n)
// {
//     if(n==0)
//         return 0;
//     if(n ==1)
//         return 1;
//     return fibo(n - 1) + fibo(n - 2);
// }

int fibo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int ans= fibo(n - 1) + fibo(n - 2);
    return ans;
}

int main()
{
    //finding fibonacci series of index value
    // 0 1 2 3 4 5 6  7  8   9   10
    // 0 1 1 2 3 5 8  13 21  34  55  89

    // complexity O(2*N); o my god !!

    cout << fibo(8) << endl;

    return 0;
}