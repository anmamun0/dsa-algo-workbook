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

void Insert_linked(Node *&head, int v)
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

int sorted(Node *head, int size){
    Node *temp = head;
    for (int i = 1; i < size; i++){
        if(temp->val > temp->next->val){
            return 0;
        }
        temp = temp->next;
    }
}

void Print_Node(Node *head)
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
            Insert_linked(head, val);
        }
    }
    cout << "end" << endl;
    int size = Linked_Size(head);

    int flag = sorted(head,size);
    if(flag == 0){
        cout << "No - Its Unsortd" << endl;
    }
    else{
        cout << " YES - I's sortd" << endl;
    }

    return 0;
}

