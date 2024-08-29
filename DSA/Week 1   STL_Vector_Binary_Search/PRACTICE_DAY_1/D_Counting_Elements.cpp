#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> ar(N);

    for (int i = 0; i < N; i++)
    {
        cin >> ar[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        auto it = find(ar.begin(), ar.end(), ar[i] + 1);
        
        if(it != ar.end()){
            count++;
        }
    }
    cout << count;

    return 0;
}