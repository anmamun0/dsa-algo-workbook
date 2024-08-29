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
void Print_Normal(Node *head){          // O(N)
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}
void Print_Reverse(Node *tail){     // O(N)
    Node *temp = tail;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void position_inset(Node *head,int pos, int val){       // O(N)
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
int size(Node *head){       // O(N)
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void inset_head(Node *&head, int val,Node *&tail){  // O(1)
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}
void insert_tail(Node *&head,Node *&tail,int val){  // O(1)
    Node *newNode = new Node(val);
    if(tail == NULL){
        
        tail = newNode;
        head = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void delete_POS(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deleteNode;
}
void delete_Tail(Node *head, Node *&tail){
    Node *deleteNoode = tail;

    tail = tail->prev;
    delete deleteNoode;
    if(tail == NULL){
        head == NULL;
        return;
    }
    tail->next = NULL;
}
void delete_Head(Node *&head,Node *&tail){
    Node *deleteNode = head;

    head = head->next;
    delete deleteNode;
    if(head==NULL){      // if here is just 1 value then,
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    Node *tail = a;

    head->next = a;
    a->prev = head;

    // a->next = b;
    // b->prev = a;

    // b->next = c;
    // c->prev = b;

    cout << "Befor : ";
    Print_Normal(head);
    cout << endl;

    // delete_POS(head, 4);
    // delete_Tail(head,tail);

    delete_Head(head,head);

    Print_Normal(head);
    Print_Reverse(tail);

        return 0;
}