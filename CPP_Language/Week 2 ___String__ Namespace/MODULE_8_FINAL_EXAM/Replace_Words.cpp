#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string value, reply_word;
        cin >> value >> reply_word;

        while (value.find(reply_word) != -1)
        {
            int repl_size = reply_word.size();
            value.replace(value.find(reply_word), repl_size,"#");
        }
        // value.replace(8, 4, reply);
        cout << value << endl;
    }

    return 0;
}