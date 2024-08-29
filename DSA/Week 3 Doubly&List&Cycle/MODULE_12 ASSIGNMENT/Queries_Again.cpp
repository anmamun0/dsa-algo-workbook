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
    tail = newNode;
    newNode->next = NULL;
}

void Insert_head(Node *&head, Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void Insert_POS(Node *&head, Node *&tail,int pos,int val){
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;

}
int size(Node *head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}
void Printr(Node *tail){
    while(tail!=NULL){
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
void Print(Node *head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    cin >> x;
    while(x--){
        int p , val;
        cin >> p >> val;
        if(p==0){
            Insert_head(head, tail, val);
            cout << "L -> ";
            Print(head);
            cout << "R -> ";
            Printr(tail);  
        }
        else if(p == size(head)){
            Insert_tail(head, tail, val);
            cout << "L -> ";
            Print(head);
            cout << "R -> ";
            Printr(tail);            
        }
        else if(p>0 && p<size(head)){
            Insert_POS(head, tail, p, val);
            cout << "L -> ";
            Print(head);
            cout << "R -> ";
            Printr(tail);  
        }
        else{
            cout << "Invalid" << endl;
        }
    }

    return 0;
}