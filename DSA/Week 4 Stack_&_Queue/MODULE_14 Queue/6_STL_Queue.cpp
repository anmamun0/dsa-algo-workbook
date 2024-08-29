#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int N;
    cin >> N;
    while(N--){
        int x;
        cin >> x;
        q.push(x);
    }
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    cout << q.size() << endl;

    return 0;
}