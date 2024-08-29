#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int size(node *head)
{
    int count = 0;
    node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_at_head(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(node *&head, int val, int sz)
{
    node *newnode = new node(val);
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void delete_at_head(node *&head, int val)
{
    node *tmp = head;
    if (tmp == NULL)
        return;
    head = head->next;
    delete tmp;
}
void delete_any_pos(node *head, int val)
{
    node *tmp = head;
    for (int i = 0; i < val - 1; i++)
    {
        tmp = tmp->next;
    }
    node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void print_at(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    int test;
    cin >> test;
    node *head = NULL;
    while (test--)
    {
        int sz = size(head);
        int x, val;
        cin >> x >> val;

        if (x == 0)
        {
            insert_at_head(head, val);
            // print_at(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, val, sz);
            // print_at(head);
        }
        else if (x == 2)
        {
            if (val == 0)
            {
                delete_at_head(head, val);
                // print_at(head);
            }
            // else if (val > sz)
            // {
            //     print_at(head);
            // }

            else
            {
                delete_any_pos(head, val);
                // tmp->next=tmp->next->next;
                // print_at(head);
            }
        }
        print_at(head);
    }
    // Write your code here

    return 0;
}