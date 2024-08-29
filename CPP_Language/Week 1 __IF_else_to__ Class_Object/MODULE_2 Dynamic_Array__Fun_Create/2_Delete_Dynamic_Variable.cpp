#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *x = new int;

    *x = 200;
    cout << *x << endl;

    delete x;
    
    cout << *x << endl;

    return 0;
}