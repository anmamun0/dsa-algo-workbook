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
void Delete_Pos(Node *head, int pos)        //Time Complixity = O(N)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1;i++){
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
 
    delete deleteNode;
}

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

    int pos;
    cin >> pos;

    if(pos>=size(head)){
        cout << "Invalid . " << endl;
    }
    else{
        Delete_Pos(head, pos);
        Print_linked_list(head);
    }

    return 0;
}