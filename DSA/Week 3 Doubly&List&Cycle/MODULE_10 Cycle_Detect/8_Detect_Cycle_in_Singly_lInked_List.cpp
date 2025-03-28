// Slow and Fast Data stucture                 = /  Time Complexity O(N);
// Hare And Tortorise Algorithom Data Stuctur; =

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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            // cout << "Cycle Dected" << endl;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Cycle Dected" << endl;
    }
    else
    {
        cout << "Cycle No Dected" << endl;
    }

    return 0;
}