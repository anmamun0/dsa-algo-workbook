#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<ll> hight;
        int n;
        cin >> n;

        priority_queue<ll> pq;

        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            hight.push_back(a);
            pq.push(a);
        }
        int fastMax = -1, secondMax = -1;

        fastMax = pq.top();
        pq.pop();
        secondMax = pq.top();

        int fastindx = -1, secondindex = -1;

        bool who_is_first = false, who_is_second = false;

        for (int i = 0; i < n; i++)
        {
            if(fastMax==hight[i])
            {
                fastindx = i;
                if(!who_is_second)
                    who_is_first = true;
            }
            if(secondMax == hight[i])
            {
                secondindex = i;
                if(!who_is_first)
                    who_is_second = true;
            }
        }

        if(who_is_first and !who_is_second)
            cout << fastindx << " " << secondindex << endl;
        else
            cout << secondindex << " " << fastindx << endl;
    }

    return 0;
}