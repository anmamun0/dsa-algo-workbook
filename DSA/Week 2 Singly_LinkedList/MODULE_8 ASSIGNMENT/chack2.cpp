#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;

        return;
    }
    // tail->next = newNode;
    // tail = newNode;

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_duplicate(Node *tmp, int value)
{
    Node *tmp2 = tmp;
    while (tmp2->next != NULL)
    {
        if (tmp2->next->value == value)
        {
            Node *deleteNode = tmp2->next;
            tmp2->next = deleteNode->next;
            delete deleteNode;
        }
        else
        {
            tmp2 = tmp2->next;
        }
    }
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        else
        {

            insert_tail(head, value);
        }
    }

    Node *tmp = head;
    while (tmp != NULL)
    {
        delete_duplicate(tmp, tmp->value);
        tmp = tmp->next;
    }

    print_list(head);
    return 0;
}