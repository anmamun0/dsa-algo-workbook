#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void Insert_link_list(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void Print_Linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << " , ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;

    for (int i = 0; i < 10; i++){
        Insert_link_list(head, i);
    }

    Print_Linked_list(head);

    return 0;
}