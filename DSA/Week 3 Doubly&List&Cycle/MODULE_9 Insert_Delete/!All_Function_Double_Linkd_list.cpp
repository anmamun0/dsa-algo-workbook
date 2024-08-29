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
int Size(Node *head)                                        // Time Complexity = O(N);
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
void Insert_Head(Node *&head, Node *&tail, int val)         // Time Complexity = O(1);
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void Insert_Tail(Node *&head, Node *&tail, int val)        // Time Complexity = O(1);
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void Insert_POS(Node *head, int pos, int val)              // Time Complexity = O(N);
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}
void delete_Head(Node *&head, Node *&tail)                 // Time Complexity = O(1);
{
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){                                      // If here are just 1 vaue then,
        tail = NULL;
        return;
    }

    head->prev = NULL;
}
void delete_Tail(Node *&head, Node *&tail)                  // Time Complexity = O(1);
{
    if (tail == NULL)   //If No value here then,
    {
        head = NULL;
        return;
    }
    Node *deleteNode = tail;

    tail = tail->prev;
    delete deleteNode;

    if(tail == NULL){   // if here is just 1 value then,
        head = NULL;
        return;
    }
    tail->next = NULL;
}
void delete_POS(Node *&head, Node *&tail, int pos)           // Time Complexity = O(N);
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    temp->next->prev = temp;
}
void Print(Node *head)                                       // Time Complexity = O(N);
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Print_Reverse(Node *tail)                               // Time Complexity = O(N);
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void Print_Reverse_Two_Pointer(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
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

    cout << "Befor : ";
    Print(head);
    cout << endl;

    Insert_Head(head, tail, 100);
    Print(head);

    Insert_Tail(head, tail, 500);
    Print(head);

    Insert_POS(head, 2, 900);
    Print(head);

    delete_Head(head, tail);
    Print(head);

    delete_Tail(head, tail);
    Print(head);

    delete_POS(head, tail, 1);
    Print(head);

    return 0;
}

/*AN.Mamun
                 Array        Singly         Doubly

Insert Head =    O(N) *        O(1)          O(1)
Insert Tail =    O(1)          O(1)          O(1)
Insert Pos  =    O(N)          O(N)          O(N)

Delete Head =    O(N) *        O(1)          O(1) ~
Delete Tail =    O(1)          O(N) *        O(1) ~
Delete Pos  =    O(N)          O(N)          O(N)

If I need to use Just (Delete Tail and Head).
I should use Doubly Linked list.


Befor : 10 20 30 40

100 10 20 30 40
100 10 20 30 40 500
100 10 900 20 30 40 500
10 900 20 30 40 500
10 900 20 30 40
10 20 30 40

*/