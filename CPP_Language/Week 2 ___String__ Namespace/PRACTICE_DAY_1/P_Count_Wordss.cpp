#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    int count=0;
    while (ss>>word)
    {
        int word_size = word.size();
        while (word_size--)
        {
            int a = word[word_size];
            if((a>64 && a<91) ||(a>96 && a<123)|| (a>47 && a<58)) 
            {
                count++;
                break;
            }
              
            
        }
        
    }
    cout << count << endl;

    return 0;
}