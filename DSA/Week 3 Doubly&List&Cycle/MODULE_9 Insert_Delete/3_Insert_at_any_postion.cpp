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
void position_inset(Node *head,int pos, int val){
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}
int size(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
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

    int pos, val;
    cin >> pos >> val;
    if(pos>=size(head))
    {
        cout << "Invalid"<<endl;
    }
    else{
        position_inset(head,pos,val);
    }
        Print_Normal(head);
        Print_Reverse(tail);

        return 0;
}