#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    queue<string> line;
    while (N--)
    {
        int no;
        cin >> no;
        if(no==0){
            string name;
            cin >> name;
            line.push(name);
        }
        else if(no == 1 ){
            if(line.empty()){
                cout << "Invalid" << endl;
            }
            else{
                cout << line.front() << endl;
                line.pop();
            }
        }
        // else if (no == 1 && line.empty()){
            
        // }
    }
    


    return 0;
}