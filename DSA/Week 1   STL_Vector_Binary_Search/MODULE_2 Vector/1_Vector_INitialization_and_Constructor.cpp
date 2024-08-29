#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; // Type: 1;
    // vector<int> v(5); // Type : 2;
    // vector<int> v(5, 10); // Type: 3;

    // vector<int> v2(5, 100);// Type: 4;
    // vector<int> v(v2); // Type: 4;

    int a[6] = {1, 2, 3, 4, 5, 6};// Type: 5;
    vector<int>v(a, a + 6); // Type: 5;

    vector<int> v = {1, 2, 3};
    v[1] = 100;

    for (int i = 0; i < v.size(); i++)
    {
    cout << v[i] << " ";
    }
    
    cout << endl;

    return 0;
}