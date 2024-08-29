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
void Print_recursing(Node *n){
    if(n == NULL)
        return;
    cout << n->val << " ";
    Print_recursing(n->next);

}
void Print_reversly(Node *n){
    if(n == NULL)
        return;
    Print_reversly(n->next);

    cout << n->val << " ";
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

    Print_recursing(head);
    cout << endl;
    Print_reversly(head);

    // cout <<endl << "head -> " << head->val << endl;

    return 0;
}