#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev;
    int val;
    Node *next;

    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};
void Insert_Tail(Node *&head, Node *&tail, int val)     // Time Complexity = O(1);
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void Print(Node *head)          // Time Complexity = O(N);
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Print_Reverse(Node *tail)      // Time Complexity = O(N);
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1)
            break;
        Insert_Tail(head, tail, val);
    }
    
    Print(head);
    Print_Reverse(tail);

    return 0;
}