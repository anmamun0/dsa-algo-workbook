#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> array(N);

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    for (auto it = array.end()-1; it >= array.begin(); it--)
    {
        cout << *it << " ";
    }
    
    

    return 0;
}