#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;

    // list<int> myList(10);

    // list<int> myList(10,5);

    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> myList(list2);

    // int ar[5] = {6, 7, 8, 9, 0};
    // list<int> myList(ar , ar + 5);

    vector<int> ar = {100, 200, 300};
    list<int> myList(ar.begin(), ar.end());

    //  1 way;
    //  for (auto it = myList.begin(); it != myList.end();it++){
    //      cout << *it << endl;
    //  }
    
    // 2 way - Range base for loop;
    for(int val:myList){
        cout << val << endl;
    }

        // cout << myList.size();

    return 0;
}