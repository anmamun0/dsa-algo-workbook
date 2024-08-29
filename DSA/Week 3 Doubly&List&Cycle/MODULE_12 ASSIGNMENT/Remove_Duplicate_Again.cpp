#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> Node;
    int x;
    while(true){
        cin >> x;
        if(x==-1)
            break;
        Node.push_back(x);
    }
    
    Node.sort();
    Node.unique();
    for(int c:Node){
        cout << c << " ";
    }

    return 0;
}