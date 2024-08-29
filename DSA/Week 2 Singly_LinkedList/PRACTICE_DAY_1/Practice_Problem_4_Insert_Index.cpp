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
void Insert_index(Node *&head, int v)
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
void Insert_Pos(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if(temp == NULL){
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void Insert_Head(Node *&head, int v)
{
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}
void Print_linked(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    cout << endl
         << "Input Value -> ";
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
            Insert_index(head, val);
        }
    }

    int N;
    cout << "Reped Lopp  : ";
    cin >> N;
    cout << "[Position][value]" << endl;

    while (N--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            Insert_Head(head, val);
        }
        else
        {
            Insert_Pos(head, pos, val);
        }
        cout << "    ---------------------------> Your List : ";
        Print_linked(head);
    }

    return 0;
}