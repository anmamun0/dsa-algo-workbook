#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;

    // s = "hhhhhhhhhiiiiiiiiihhhh";
    // cout << s.capacity() << endl;
    // cout << s.size() << endl;

    // s.clear();
    // cout << s.size() << endl;

    // s.clear();
    // (s.empty()==true)? cout<<"Empty"<<endl: cout<<"NOT Empty"<<endl;

    s.resize(3);
    cout << s << endl;

    s.resize(10,'X');
    cout << s << endl;
    return 0;
}