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

void Insert_node(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int Linked_Size(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    Node *head = NULL;

    cout
        << "Insert items -> ";

    while (true)
    {
        int val;

        cin >> val;
        if (val == -1)
        {
            break;
        }
        
        else
        {
            Insert_node(head, val);
        }
    }

    int size = Linked_Size(head);
    cout << size;
    return 0;
}