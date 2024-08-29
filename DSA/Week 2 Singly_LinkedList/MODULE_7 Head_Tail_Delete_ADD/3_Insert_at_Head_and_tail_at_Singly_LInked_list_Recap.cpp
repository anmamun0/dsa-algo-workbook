#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void Print_linked_list(Node *head)   // O(N) time complixity
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int size(Node *head)     // O(N) time complixity
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insert(Node *head, int pos, int val)   // O(N) time complixity
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    // cout << temp->val << endl;
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_head(Node *&head,int val){       // O(1) time complixity
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void inset_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Print_linked_list(head);
    cout << "Tail-> " << tail->val << endl;

    int pos, val;
    cin >> pos >> val;

    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if(pos ==0 ){
        insert_head(head, val);
    }
    if(pos == size(head)){
        inset_tail(head, tail, val);
    }
    else
    {
        insert(head, pos, val);
    }
    Print_linked_list(head);

    cout << "Tail-> " << tail->val << endl;


    return 0;
}