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
    
    bool flag = false;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N;j++){
            if(ar[i] == ar[j]){
                flag = true;
                break;
            }
        }
    }
    (flag == true) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}