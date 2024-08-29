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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

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
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }

        head->prev = NULL;
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;

    int N;
    cin >> N;
    while(N--){
        int x;
        cin >> x;
        q.push(x);
    }
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }


    return 0;
}