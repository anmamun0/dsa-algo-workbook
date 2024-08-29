#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    char symbol;
    cin >> A >> symbol >> B;

    if(symbol =='>'&& A>B){
        cout << "Right";
    }
    else if(symbol =='<'&& A<B){
        cout << "Right";
    }
    else if(symbol =='='&& A==B){
        cout << "Right";
    }
    else{
        cout << "Wrong";
    }

    return 0;
}