#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll T;
    cin >> T;

    priority_queue<ll, vector<ll>, greater<ll>> q;
    priority_queue<ll, vector<ll>, greater<ll>> even;
    priority_queue<ll, vector<ll>, greater<ll>> odd;


    while(T--)
    {
        ll input;
        cin >> input;
        if(input == 1)
        {
            ll val;
            cin >> val;
            q.push(val);

            if(val%2 == 0)
            {
                even.push(val);
                // cout << "f" << endl;
            }
            else if(val%2 == 1)
            {
                odd.push(val);
            }
            
        }
        else if(input == 2)
        {
            if(even.empty()) 
            {
                cout << "empty" << endl;
                continue;
                
            }

            cout << even.top() << endl;
            even.pop();

           
        }
        else if(input == 3)
        {
            if(odd.empty()) 
            {
                cout << "empty" << endl;
                continue;
            }
            cout << odd.top() << endl;
            odd.pop();

        }
    }

    return 0;
}