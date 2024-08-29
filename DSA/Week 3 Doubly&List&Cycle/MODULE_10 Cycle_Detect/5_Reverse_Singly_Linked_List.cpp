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
void Print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}
void Print_reverse(Node *n){
    if(n == NULL){
        return;
    }
    Print_reverse(n->next);
    cout << n->val << " ";
}
void reverse(Node *&head, Node *current){
    if(current->next == NULL){
        head = current;
        return;
    }
    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;

    Print(head);
    // Print_reverse(head);
    reverse(head, head);

    return 0;
}