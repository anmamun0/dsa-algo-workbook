#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }

      
};
void Print_linked_list(Node *head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}
int main()
{
    // Node a, b;
    // a.val = 20;
    // b.val = 30;
    // a.next = &b;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Print_linked_list(head);

    return 0;
}