#include <bits/stdc++.h>
using namespace std;
int main()
{
// 1 Way to input in vector -----------------------------
    // int n;
    // cin >> n;
    

    // vector<string> v;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin >> s;
    //     v.push_back(s);
    // }
    // // for (int i = 0; i < v.size(); i++)
    // // {
    // //     cout << v[i] << " ";
    // // }
    // for(string c:v){
    //     cout << c << " ";
    // }

    int N;
    cin >> N;
    cin.ignore();

    vector<string> v(N);
    for (int i = 0; i < N; i++)
    {
        
        getline(cin, v[i]);
        
    }
    
    for(string c: v){
        cout << c << endl;
    }

    return 0;
}