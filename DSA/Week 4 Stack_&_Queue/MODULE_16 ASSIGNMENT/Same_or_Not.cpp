#include <bits/stdc++.h>
using namespace std;
void sameOrNotSame(stack<int> A,queue<int> B){
    bool flag = true;
    while(!A.empty() and !B.empty()){
        if(A.top() != B.front()){
            flag = false;
            break;
        }
        A.pop();
        B.pop();
    }
    (flag == true) ? cout << "YES" << endl : cout << "NO" << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> A;
    queue<int> B;

    while(n--){
        int x;
        cin >> x;
        A.push(x);
    }
    while(m--){
        int x;
        cin >> x;
        B.push(x);
    }
    // cout << n << " " << m;

    if(A.size() == B.size()){
        sameOrNotSame(A, B);
    }
    else{
        cout << "NO" << endl;

    }

    return 0;
}