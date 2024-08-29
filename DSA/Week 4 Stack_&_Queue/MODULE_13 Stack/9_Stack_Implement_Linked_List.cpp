#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node()
    {
        this->val = 0;
        next = NULL;
    }
    Node(int val)
    {
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

    myStack()
    {
    }

    int eize()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        sz--;
        if(head==tail){
            head = NULL;
            tail = NULL;
            delete head;
            delete tail;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        tail = temp;
        delete temp->next;
        tail->next = NULL;
    }

    int top()
    {
        if (head == NULL)
        {
            return -1;
        }

        return tail->val;
    }
};

int main()
{
    myStack a;
    a.push(10);
    a.push(20);
    a.push(30);

    cout << a.top() << endl;
    a.pop();
    cout << a.top() << endl;
    a.pop();
    cout << a.top() << endl;
    return 0;
}