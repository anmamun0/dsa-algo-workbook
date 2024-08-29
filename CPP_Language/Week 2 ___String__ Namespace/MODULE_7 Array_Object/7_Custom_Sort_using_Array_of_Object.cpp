#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int frq[26] = {0};
    for(char c:s){
        frq[c - 'a']++;
    }
    
    

    return 0;
}