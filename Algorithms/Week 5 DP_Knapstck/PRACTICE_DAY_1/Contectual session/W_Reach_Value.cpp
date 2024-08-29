#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll H = 1e12 + 10;
bool flag;
void find_(ll i, ll N)
{
    if(i == N)
    {
        flag = true;
        return;
    }
    if(i>H)
        return;

    find_(i * 10, N);
    find_(i * 20, N);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll N;
        cin >> N;
        flag = false;

        find_(1, N);

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}