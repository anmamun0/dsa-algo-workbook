#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string a = "Hello";
    // string b = "World";

    // a += b;
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;

    // a = "HelloA"; // ->works
    // a = a + "A";  //-> works
    // a[5] = 'A';   // -> Not works
    // a.push_back('A'); //-works
    // cout << a << endl;

    // cout << a << endl;
    // a.pop_back();
    // a.pop_back();
    // cout << a << endl;
//-------------------------------------------------
    string b = "Hello_World";

    // b = "ANMAMUN";
    // b.assign("ANMAMUN");
    // cout << b << endl;

    // b.erase(5, 3);
    // b.replace(5, 3, "XY");
    b.replace(5, 0, "XY");

    // b.insert(5, "XY");
    cout << b << endl;

    return 0;
}