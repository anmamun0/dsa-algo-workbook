#include <bits/stdc++.h>
using namespace std;
bool valid_or_not(list<string>Node,string web){
    bool flag = false;
    for(string c: Node){
        if(c== web){
            flag = true;
            break;
        }
    }
    return flag;
}
int visit(list<string> Node, string web){
    int pos = 0;
    for(string c: Node){
        pos++;
        if(c== web){
            break;
        }
    }
    return pos;
}
int main()
{
    list<string> Node;

    while(true){
        string browser;
        cin >> browser;
        if(browser== "end"){
            break;
        }
        else{
            Node.push_back(browser);
        }

    }
    int x;
    cin >> x;
    int pos;

    while (x--)
    {   
        string option;
        cin >> option;

        if (option == "visit")
        {
            string web;
            cin >> web;
            bool flag = valid_or_not(Node, web);
            if(flag == true){
                int possition = visit(Node, web);// 1,2,3
                pos = possition;
                int v = pos - 1;
                cout << *next(Node.begin(), v)<<endl; // 0 1 2 3 4
            }
            else{
                cout << "Not Available "<<endl;
            }
        }    
        else if(option == "prev"){
            int sz = Node.size();
            if(pos>1 && pos<= sz){
                pos--;
                int v = pos - 1;
                cout << *next(Node.begin(), v)<<endl; // 0 1 2 3 4
            }
            else{
                cout << "Not Available"<< endl;
            }

        }
        else if(option == "next"){
            int sz = Node.size();
            if(pos>0 && pos<sz){
                pos++;
                int v = pos - 1;
                cout << *next(Node.begin(), v)<<endl; // 0 1 2 3 4
            }
            else{
                cout << "Not Available"<< endl;
            }

        }
        
    }
    // cout << *next(Node.begin(), 4);

    // list<int> Node = {10, 20, 30, 40,50};
    // for(auto it = Node.rbegin(); it != Node.rend(); it++){
    //     cout << *it << endl;
    // }



            // auto it = find(Node.begin(), Node.end(), web);
            // if (it == Node.end())
            // {
            //     cout << "Not Available" << endl;
            // }
            // else
            // {
            //     cout << *it << endl;
            // }
    return 0;
}