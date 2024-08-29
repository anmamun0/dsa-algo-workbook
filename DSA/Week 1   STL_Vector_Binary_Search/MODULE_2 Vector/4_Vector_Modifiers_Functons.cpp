#include <bits/stdc++.h>
using namespace std;
int main()
{
// -- Replace --------------------------------------------------------
    // vector<int> v = {1, 2, 2, 4, 3, 5, 5, 2, 3, 5, 2};
    // //replace(v.begin(), v.end(), 2, 100);

    // replace(v.begin(), v.end()-1, 2, 100);
    // for (int x:v){
    //     cout << x << " ";
    // }
// -- Find --------------------------------------------------------
    // 1 WAY-----
    // vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};
    // vector<int>::iterator it;
    // it = find(v.begin(),v.end(),3);
    // cout << *it<< endl;

    // 2 WAY-----

    // vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};
    // auto it = find(v.begin(),v.end(),16);
    // cout << *it<< endl;


    // 3 WAY-----

    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};
    
    auto it = find(v.begin(),v.end(),100);
    if(it == v.end())
        cout << "Not Found";
        else
            cout << "Found";



return 0;
}