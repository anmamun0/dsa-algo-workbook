#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int N;
    cin >> N;
    while (N--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    if(s.count(100)){  // O(logN)
        cout << "Found" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    

    return 0;
}
/*
Input;
7
10 49 3 5 3 5 6 
output:
3
5
6
10
49
NO
*/