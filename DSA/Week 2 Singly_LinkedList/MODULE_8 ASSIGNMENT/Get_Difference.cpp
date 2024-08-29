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
void max__(Node *head){
    Node *temp = head;
    int mx = temp->val;
    int mn = temp->val;
    while(temp->next != NULL){
        mx = max(mx, temp->next->val);
        mn = min(mn,temp->next->val);
    }
    int deff =mx-mn;
    cout<<deff<<endl;


}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

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
            Insert_Linked_list_tail(head, tail, val);
        }
    }
    int max = head->val;
    int min = head->val;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
        else if (i->val < min)
        {
            min = i->val;
        }
    }

    cout << max - min;
    return 0;
}