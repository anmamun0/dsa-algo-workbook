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
void Insert_node(Node *&head, int v)        //Time Complixity = O(N)
{
    Node *newNode = new Node(v);
    if(head == NULL){
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

void Insert_Head(Node *&head, int v)  
{
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;

}

void Delete_Pos(Node *head, int pos)
{  
    if(head == NULL){
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= pos - 1;i++){
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
 
    delete deleteNode;
    
}
void Delete_Head(Node *&head)     
{
    if(head == NULL){
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int Size(Node *head)  
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
void print_linked(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    int X;
    cin >> X;
    while(X--){
        int indx, val;
        cin >> indx >> val;

        if(indx == 1){
            Insert_node(head, val);
        }
        else if(indx == 0 ){
            Insert_Head(head, val);
        }
        else if(indx == 2 && val<=Size(head)){
            if(val == 0){
                Delete_Head(head);
            }
            else if(val<Size(head)) {
                Delete_Pos(head, val);
            }
        }
        cout << endl;
        print_linked(head);
    }
    return 0;
}