#include <bits/stdc++.h>
using namespace std;
int main()
{
    string value;
    getline(cin, value);
    stringstream ss; // stringstream ss(value);
    ss << value;

    string word;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    while(ss>>word){
        cout << word << endl;
    }
    return 0;
}