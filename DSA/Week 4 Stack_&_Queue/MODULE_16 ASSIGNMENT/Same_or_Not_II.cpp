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
    int top()
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

void sameOrNotSame(myStack st,myQueue qe){
    bool flag = true;
    while(!st.empty() and !qe.empty()){
        if(st.top() != qe.front()){
            flag = false;
            break;
        }
        st.pop();
        qe.pop();
    }
    (flag == true) ? cout << "YES" << endl : cout << "NO" << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;

    myStack st;
    myQueue qe;

    while(n--){
        int x;
        cin >> x;
        st.push(x);
    }
    while(m--){
        int x;
        cin >> x;
        qe.push(x);
    }
    if(st.size() == qe.size()){
        sameOrNotSame(st, qe);
    }
    else{
        cout << "NO" << endl;

    }
    return 0;
}