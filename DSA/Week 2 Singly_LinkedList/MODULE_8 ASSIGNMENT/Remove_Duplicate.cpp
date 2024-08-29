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

void Insert_Linked_list_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void Print_Node(Node *head) 
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}


int back(Node *head, int x)
{
    int chack = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val == x)
        {
            chack = 1;
            break;
        }
        temp = temp->next;
    }

    return chack;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        int k = back(head, val);
        // cout << k;

        if (val == -1)
        {
            break;
        }

        // cout << chack << val <<" ";
        if (k == 0)
        {
            Insert_Linked_list_tail(head, tail, val);
        }
    }

    Print_Node(head);
    return 0;
}