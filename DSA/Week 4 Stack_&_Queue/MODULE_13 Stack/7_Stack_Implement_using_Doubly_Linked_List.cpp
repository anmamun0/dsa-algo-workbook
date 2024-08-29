#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        Node *prev;
        int val;
        Node *next;

        Node(int val)
        {
            this->prev = NULL;
            this->val = val;
            this->next = NULL;
        }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int Top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack stack;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stack.push(x);
    }
    while (!stack.empty())
    {
        cout << stack.Top() << endl;
        stack.pop();
    }

    return 0;
}