
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
void Insert_Head(Node *&head, int v) // Time Complixity = O(1)
{
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}
void Insert_node(Node *&head, int v) // Time Complixity = O(N)
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
void Insert_tail(Node *&head, Node *&tail, int val) // Time Complixity = O(1)
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
void Insert_Pos(Node *head, int pos, int v) // Time Complixity = O(N)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void Delete_Pos(Node *head, int pos) // Time Complixity = O(N)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    delete deleteNode;
}
void Delete_Head(Node *&head) // Time Complixity = O(1)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int Size(Node *head) // Time Complixity = O(N)
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

void Print_Node(Node *head) // Time Complixity = O(N)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}
void Print_Revr(Node *n)
{
    if (n == NULL)
    {
        return;
    }
    Print_Revr(n->next);
    cout << n->val << " ";
}
void Reverse_Address(Node *&head, Node *current){
    if(current->next == NULL){
        head = current;
        return;
    }
    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert linked list         -> " << endl;
        cout << "Option 2: Insert at any Position     -> " << endl;
        cout << "Option 3: Insert at Head             -> " << endl;
        cout << "Option 4: Delete from Position       -> " << endl;
        cout << "Option 5: Delete From Head           -> " << endl;
        cout << "Option 6: Print Your Link List       -> " << endl;
        cout << "Option 7: Terminal                   ->" << endl;
        cout << "          ---------------------------->  ";

        int Option;
        cin >> Option;

        if (Option == 1)                             // Option 1: Insert linked list at tail ->
        { 

            cout << "Insert item : ";
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
            cout << "Included items..." << endl
                 << endl;
        }
        else if (Option == 2)                        // Option 2: Insert at any Position     ->
        {
            int pos, val;
            cout << "Input item Position: ";
            cin >> pos;
            cout << "Input item value: ";
            cin >> val;

            Insert_Pos(head, pos, val);
            cout << endl
                 << "Inserted..." << endl
                 << endl;
        }

        else if (Option == 3)                        // Option 3: Insert at Head             ->
        {
            int val;
            cout << "Input item value: ";
            cin >> val;
            Insert_Head(head, val);

            cout << "Insert Head..." << endl
                 << endl;
        }

        else if (Option == 4)                        // Option 4: Delete from Position       ->
        {
            int pos;
            cout << endl
                 << "Input item Position";
            cin >> pos;

            Delete_Pos(head, pos);
            cout << endl
                 << "Deleted..." << endl
                 << endl;
        }

        else if (Option == 5)                        // Option 5: Delete From Head           ->
        {
            Delete_Head(head);
            cout << endl
                 << "Deleted Head..." << endl
                 << endl;
        }

        else if (Option == 6)                        // Option 6: Print Your LInk LisT       ->
        {
            cout << endl
                 << "Here Your Linked Item's : ";

            Print_Node(head);

            cout << endl
                 << "Print out..." << endl
                 << endl;
        }

        else if (Option == 7)                         // Option 7: Terminal                   ->
        { 
            break;
        }
    }

    return 0;
}