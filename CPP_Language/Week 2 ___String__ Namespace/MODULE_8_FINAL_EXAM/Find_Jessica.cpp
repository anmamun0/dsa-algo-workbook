#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    string word;
    int chack = 0;

    while (ss>>word)
    {
        if(word =="Jessica"){
            chack += 1;
            break;
        }
    }
    (chack == 1) ? cout << "YES" << endl: cout << "NO" << endl;
    

    return 0;
}