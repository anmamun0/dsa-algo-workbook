
#include <bits/stdc++.h>
using namespace std;
void ssort(vector<int>&v){
    sort(v.begin(), v.end());
    vector<int>::iterator ip;
    // ip = unique(v.begin(), v.begin() + 12);
    ip = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), ip));
    cout << *ip << endl;
}
int main()
{
    vector<int> v = { 1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 };

    ssort(v);
    for(int c:v){
        cout << c << " " ;
    }
    cout << endl;


    return 0;
}

