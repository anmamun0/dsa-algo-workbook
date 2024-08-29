#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        vector<int> mat(N);
        for (int i = 0; i < N;i++)
        {
            int a;
            cin >> a;
            mat[i] = a;
        }

        vector<int> pre(N);
        pre[0] = mat[0];
        for (int i = 1; i < N;i++)
        {
            pre[i] = pre[i - 1] + mat[i];
        }
        for (int i = 0; i < N; i++)
        {
            cout << pre[i] << " ";
        }
        cout << endl;
        int cnt = 0;

        for (int i = 1; i < N - 1; i++)
        {

            if (pre[i - 1] == pre[N - 1] - pre[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

