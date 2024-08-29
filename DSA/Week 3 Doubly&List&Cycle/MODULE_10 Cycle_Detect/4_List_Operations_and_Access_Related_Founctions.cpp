#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10 ,20, 30 ,40 ,50 ,60 ,10 ,40 ,60};
    // myList.remove(10);

    // sort(myList.begin(), myList.end()); == X

    // myList.sort();
    // myList.sort(greater<int>());

    // myList.sort();
    // myList.unique();

    // myList.reverse();

    // for(int val: myList){
    //     cout << val << " ";
    // }

    // cout << myList.front();
    // cout << myList.back();

    cout << *next(myList.begin(), 3) << endl;

    return 0;
}