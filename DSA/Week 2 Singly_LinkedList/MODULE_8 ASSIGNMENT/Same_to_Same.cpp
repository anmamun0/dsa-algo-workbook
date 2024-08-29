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
int size(Node *head)
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
void same_same(Node *head1, Node *head2)
{
    bool chack = true;
    Node *temp = head2;

    for (Node *i = head1; i != NULL; i = i->next)
    {
        if (i->val != temp->val)
        {
            chack = false;
            break;
        }
        // cout << i->val << " " << temp->val << endl;
        temp = temp->next;
    }
    if (chack == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;

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
            Insert_Linked_list_tail(head1, tail1, val);
        }
    }


    // second Linked List------------->

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val2;
        cin >> val2;

        if (val2 == -1)
        {
            break;
        }
        else
        {
            Insert_Linked_list_tail(head2, tail2, val2);
        }
    }

    int fast = size(head1);
    int second = size(head2);

    // cout << fast << " " << second << endl;

    if(fast==second){
        same_same(head2, head1);
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}