#include <bits/stdc++.h>
using namespace std;
int main()
{
    char N;
    cin >> N;

    int x = N;
    if(x>=48 && x<=57){
        cout << "IS DIGIT" << endl;
    }
    else{
        cout << "ALPHA" << endl;
        if(x>=65 && x<=90){
            cout << "IS CAPITAL" << endl;
        }
        else if(x>=97 && x<=122){
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}