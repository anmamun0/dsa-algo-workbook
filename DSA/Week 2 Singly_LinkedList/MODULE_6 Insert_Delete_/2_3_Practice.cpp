#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void Insert_link_till(Node *&head, string v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Inset Item -> " << endl;
        cout << "Option 2: Print List ->" << endl;
        cout << "Break List" << endl;

        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Insert Value:  ";
            string v;
            cin >> v;
            Insert_link_till(head, v);
        }
        else if (option == 2)
        {
            cout << "Here your items:  ";
            print_linked_list(head);
        }
        else if (option == 3)
        {
            break;
        }
        else
        {
            break;
        }
    }

    return 0;
}