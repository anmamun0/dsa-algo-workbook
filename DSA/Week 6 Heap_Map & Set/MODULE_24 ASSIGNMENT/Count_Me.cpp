#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);

        map<string, int> mp;

        
        string s_max ;
        int i_max = INT_MIN;

        while (ss >> word)
        {
            // cout << word << endl;
            mp[word]++;

            if(i_max < mp[word]){
                s_max = word;
                i_max = mp[word];
            }

        }
        cout << s_max << " " << i_max << endl;



        // cout << sentence << endl;

    //     string s_max ;
    //     int i_max = INT_MIN;

    //     for (auto it = mp.begin(); it != mp.end(); it++)
    //     {
            // cout << it->first << " -> " << it->second << endl;
    //         if(i_max < it->second){
    //             s_max = it->first;
    //             i_max = it->second;
    //         }
    //     }
    //     cout << s_max << " " << i_max << endl;
        // cout << ow << endl;
    }

    return 0;
}