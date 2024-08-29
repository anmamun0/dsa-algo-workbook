#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";

    // cout << *s.begin() << endl; //array its a private place thats why if we need to show value , we need to derafarance
    // cout << *s.end() << endl;
    // cout << *(s.end() - 1) << endl;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    
    
     string::iterator it;
     for (it = s.begin(); it < s.end(); it++){
         cout << *it << endl;

    }

    // Different way;
    // for (string::iterator it = s.begin(); it < s.end(); it++){
    //     cout << *it << endl;
        
    // }

    // Different way and best way ; for 20 update compiler support ;

    // for (auto it = s.begin(); it < s.end(); it++){
    //     cout << *it << endl;

    // }

        return 0;
}