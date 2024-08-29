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
void Insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_Node(Node *head){
    while (head!=NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
bool pallaindrome(Node *head, Node *tail){
    bool flag = true;
    Node *i = head;
    Node *j = tail;
    while(i!=j && i->next!=j){
        if(i->val != j->val){
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(flag == true && i->val == j->val){
        return true;
    }
    else{
        return false;
    }
    // return flag;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        int x;
        cin >> x;
        if(x == -1)
            break;
        Insert_tail(head, tail, x);
    }
    // print_Node(head);
    bool sign = pallaindrome(head,tail);
    if(sign == true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}