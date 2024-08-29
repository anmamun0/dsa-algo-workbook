#include <bits/stdc++.h>
using namespace std;
int main()
{
    //1
    // string s = "Hello World";

    //2
    // string s("Hello World2");

    //3
    // string s("Hello World3", 4);

    //4
    // string a = "Hello World4";
    // string s(a, 4);

    //5
    // string s(5,'X');
    // cout << s << endl;


    
    int i = 1, j = 5;
    for (int k = 0; k < 5; k++)
    {
        string s(j, ' ');
        string p(i, '*');
        cout << s;
        cout << p;
        cout << endl;
        j--;
        i += 2;
        
    }
     
    return 0;
}