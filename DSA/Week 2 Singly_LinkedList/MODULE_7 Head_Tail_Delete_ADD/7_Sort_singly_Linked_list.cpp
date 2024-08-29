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
void insert_tail(Node *&head, Node *&tail , int val){   //Time Complixity = O(1)
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "Print Out.." << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    cout<< "Input value -> ";
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        else{
            insert_tail(head, tail, val);
        }
    }
    for (Node * i = head; i->next!= NULL ; i= i->next)
    {
         for (Node * j = i->next; j != NULL ; j = j->next){
            if(i->val > j->val){
                swap(i->val, j->val);
            }
        }
    }
    
    print_linked(head);
    

    return 0;
}