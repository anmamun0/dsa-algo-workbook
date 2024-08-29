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
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void Print_Normal(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}
void Print_Reverse(Node *tail){
    Node *temp = tail;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    Print_Normal(head);
    Print_Reverse(tail);

    return 0;
}