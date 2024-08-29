#include <bits/stdc++.h>
using namespace std;
int main()
{

    string binary;
    cin >> binary;
    stack<char> chack;
    

    int N;
    cin >> N;
    while (N--)
    {
        int value = 0;
        int a, b;
        cin >> a >> b;

        int k = 1;
        int l = 1;

        for (char c : binary)
        {
            k++;
            l++;
            
            
            if (!chack.empty() && c == '1' && chack.top() == '0')
            {
                if(k>=a && l<=b){
                    value++;
                }
                chack.pop();
                // value++;
                continue;
            }
            if (!chack.empty() && c == '0' && chack.top() == '1')
            {
                if(k>=a && l<=b){
                    value++;
                }
                chack.pop();
                // value++;
                continue;
            }
            else
            {
                // value++;
                chack.push(c);
            }
            
        }

            cout << value << endl;
        
    }

    return 0;
}