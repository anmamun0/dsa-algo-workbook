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
    stack.push(20);
    stack.push(30);

    cout << stack.Top() << endl;
    stack.pop();
    cout << stack.Top() << endl;

    stack.pop();

    if(stack.empty() == false){
        cout << stack.Top() << endl;
    }

    return 0;
}