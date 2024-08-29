#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {

        string binary;
        cin >> binary;

        stack<char> chack;
        for(char c:binary){

            // bool k = chack.empty();
            // cout << k << endl;
            
            if (!chack.empty() && c == '1' && chack.top() == '0'){
                chack.pop();
                continue;
            }
            // if (!chack.empty() && c == '0' && chack.top() == '1'){
            //     chack.pop();
            //     continue;

            // }
            else{
                chack.push(c);
            }
        }

        if(chack.empty()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
     
    }

    return 0;
}