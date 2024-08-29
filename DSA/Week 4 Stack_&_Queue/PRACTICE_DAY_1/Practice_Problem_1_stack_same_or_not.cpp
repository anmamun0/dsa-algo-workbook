#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> N;
    stack<int> M;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        N.push(x);
    }
    int m;
    cin >> m;
    while(m--){
        int x;
        cin >> x;
        M.push(x);
    }
    
    bool flag = true;
    if(N.size() == M.size()){
        while(!N.empty()){
            if(N.top() != M.top()){
                flag = false;
                break;
            }
            N.pop();
            M.pop();
        }
    }
    else{
        flag = false;
    }
    (flag == true) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}