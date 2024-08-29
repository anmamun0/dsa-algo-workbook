#include <bits/stdc++.h>
using namespace std;
int main()
{

//--------------------------------------
    // vector<int> x = {10, 20, 30, 40};
    // vector<int> v = {1, 2, 3};
    // v = x; // O(N);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
//--------------------------------------
    // vector<int> x = {10, 20, 30, 40};
    // x.pop_back();
    // x.pop_back();

    // for (int i = 0; i < x.size(); i++)
    // {
    //     cout << x[i] << " ";
    // }
//--------------------------------------



    // vector<int> v = {10, 20, 30, 40};

        // v.insert(v.begin() + 2, 100);
        // for (int x : v){
        //     cout << x << " ";
        // }
    //--------------------------------------

        // vector<int> v = {10, 20, 30, 40};
        // vector<int> v2 = {1, 2, 3, 4};

        // v.insert(v.begin() + 2, v2.begin(),v2.end());

        // for (int x : v){
        //     cout << x << " ";
        // }
    //--------------------------------------

vector<int> v = {1, 2, 3, 4, 5};
// v.erase(v.begin()+3);

v.erase(v.begin() + 1, v.begin() + 4);
v.erase(v.begin() + 1, v.end() - 1);

for(int x:v){
    cout << x << " ";
}

return 0;
}