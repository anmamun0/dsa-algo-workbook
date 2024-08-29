#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30,40,50,60};
    // list<int> newList;
    // newList = myList;  //ShortCUT;
    // newList.assign(myList.begin(), myList.end()); // Long CUR;

    // myList.push_back(200);
    // myList.push_front(100);

    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(), 2), 100);

    // list<int> newList = {100, 200, 300};
    // myList.insert(next(myList.begin(), 2),newList.begin(),newList.end());

    // vector<int> v  = {60, 70, 80};
    // myList.insert(next(myList.begin(), 2),v.begin(),v.end());

    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2),next(myList.begin(),5));

    // replace(myList.begin(), myList.end(), 10, 100);
    auto it = find(myList.begin(), myList.end(), 60);
    if(it == myList.end()){
        cout << "Not Found";
    }
    else{
        cout << "Found";
    }
    

    // for(int val: myList){
    //     cout << val << endl;
    // }


    return 0;
}