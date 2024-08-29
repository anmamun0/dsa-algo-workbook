#include <bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n==0) return 1;
    
    return n *= rec(n-1);
}
int main()
{
    cout << "Hello Word"<<endl;
    int s = rec(5);

    cout << s << endl;

    return 0;
}