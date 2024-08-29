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

void Print_Node(Node *head)     //Time Complixity = O(N)
{
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}


void delete_dup(Node *head, int val){

    Node *temp2 = head;
    
    while(temp2->next != NULL){
        if(temp2->next->val == val){
            Node *deleteNode = temp2->next;
            temp2->next = deleteNode->next;
            delete deleteNode;
        }
        else{
            temp2 = temp2->next;
        }
    }
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

    Node *temp = head;
    while (temp != NULL)
    {
        delete_dup(temp, temp->val);
        temp = temp->next;
    }
    Print_Node(head);
    return 0;
}