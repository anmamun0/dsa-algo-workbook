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
void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
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
    int max = head->val;
    int min = head->val;
    for (Node *i = head; i->next != NULL; i=i->next){
        if(i->val > max){
            max = i->val;
        }
        else if (i->val < min){
            min = i->val;
        }
    }

    cout << endl
         << "MIN: " << min << endl
         << "MAX: " << max << endl;
    return 0;
}