#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    double val;
    Node *next;
    Node(double val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void Insert_linked_item(Node *&head, double v)
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
void Print_linked_item(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " , ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert at Tail -> " << endl;
        cout << "Option 2: Print Link list ->" << endl;
        cout << "Opton 3: Break ->" << endl;

        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Insert Value:  ";
            double v;
            cin >> v;
            Insert_linked_item(head, v);
        }
        else if (option == 2)
        {
            cout << "Here your items:  ";
            Print_linked_item(head);
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