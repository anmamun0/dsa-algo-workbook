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
int same_same(Node *head, Node *head2){
    Node *temp = head;
    Node *temp2 = head2;
    bool flag = true;
    while(temp!=NULL){
        if(temp->val != temp2->val){
            flag = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return flag;
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
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val2;
        cin >> val2;
        if(val2 == -1){
            break;
        }
        else{
            Insert_tail(head2, tail2,val2);
        }
    }
    if(size(head) == size(head2)){
        bool flag = same_same(head, head2);
        (flag == true) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}