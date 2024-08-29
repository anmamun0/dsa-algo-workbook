#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);

    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    while(ss>>word){
        // cout << word << endl;
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " -> " << it ->second << endl;
    }

    cout << mp["cricket"] << endl;

    return 0;
}

/*

intput:
I love cricket He love cricket They love cricket and they love footbool

output:
He -> 1
I -> 1
They -> 1
and -> 1
cricket -> 3
footbool -> 1
love -> 4
they -> 1
3

*/