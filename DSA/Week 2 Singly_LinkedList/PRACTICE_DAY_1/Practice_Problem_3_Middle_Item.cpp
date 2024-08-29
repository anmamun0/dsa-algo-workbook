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

void Middle_item(Node *head, int size)
{
    Node *temp = head;
    for (int i = 1; i <= size; i++)
    {
        if (size % 2 == 1 && i == int(size / 2) + 1)
        {
            cout << "Your Middle item: " << temp->val << endl;
        }
        else if (size % 2 == 0 && i == size / 2)
        {
            cout << "Your Middle item's: " << temp->val << "  ";
            cout << temp->next->val << endl;
            break;
        }
        temp = temp->next;
    }
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

    Middle_item(head, size);

    return 0;
}