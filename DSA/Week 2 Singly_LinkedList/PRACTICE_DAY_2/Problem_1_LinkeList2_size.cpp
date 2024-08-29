#include <bits/stdc++.h>
using namespace std;
class Node
{   public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int size(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    cout << "Insert Fast Linked List-> ";
    int val;

    while(true){
        cin >> val;

        if(val ==-1){
            break;
        }
        else{
            insert_tail(head, tail, val);
        }
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    cout << "Insert Secont Linked List-> ";
    int val2;

    while(true){
        cin >> val2;

        if(val2 ==-1){
            break;
        }
        else{
            insert_tail(head2, tail2, val2);
        }
    }

    int fast = size(head);
    int second = size(head2);

    if(fast == second){
        cout << "Both linked List is -> Same ";
    }
    else{
        cout << "Both linked List is -> Not Same ";

    }

    return 0;
}