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
void Insert_tail(Node *&head, Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int size(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void Print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Reverse(Node *tail){
    Node *temp = tail;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        else{
            Insert_tail(head, tail,val);
        }
    }
    Reverse(tail);

    return 0;
}