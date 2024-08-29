#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int> v;

        void push(int val)            // O(1)
        {
            v.push_back(val);
        }
        void pop()                    // O(1)
        {
            v.pop_back();
        }
        int Top(){
            return v.back();          // O(1)
        }
        int size(){                   // O(1)
            return v.size();
        }
        bool empty(){                  // O(1)
            if (v.size() == 0)
                return true;
            else
                return false;
        }
};
int main()
{
    myStack stack;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        stack.push(x);
    }

    // while(stack.empty() == true) - 
    //shortcut -- while(stack.empty())

    // while(stack.empty() == flase) -
    // shortcut -- while(!stack.empty());

    while(!stack.empty()){
        cout << stack.Top() << endl;
        stack.pop();
    }
    

    return 0;
}