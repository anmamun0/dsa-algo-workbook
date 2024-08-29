#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        Node *prev;
        string val;
        Node *next;

        Node(string val)
        {
            this->prev = NULL;
            this->val = val;
            this->next = NULL;
        }
};
void Insert_tail(Node *&head, Node *&tail, string val){
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
void visit (Node *&current,string url){
    Node *temp = current;
    while(temp->next != NULL){
        // cout << current->val << " - ";
        if(temp->val == url){
            break;
        }
        temp = temp->next;
    }
    if(temp->val == url){
        current = temp;
        cout << current->val<<endl;
    }
    else{
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true){
        string web;
        cin >> web;
        if(web == "end"){
            break;
        }
        else{
            Insert_tail(head, tail, web);
        }
    }
    Node *current = head;
    // print_Node(current);
    // visit(current, "phitron");
    // cout << current->val;
    
    int serice;
    cin >> serice;
    while(serice--){
        string option;
        cin >> option;
        if(option == "visit"){
            string url;
            cin >> url;
            if(head == NULL){
                cout << "Not Available" << endl;
            }
            else{
                visit(current, url);
            }
        }
        else if(option == "prev"){
            if(head == NULL){
                cout << "Not Available" << endl;
                continue;
            }
            if(current->prev != NULL){
                current = current->prev;
                cout << current->val<<endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if (option == "next"){
            if(head == NULL){
                cout << "Not Available" << endl;
                continue;
            }
            if(current->next != NULL){
                current = current->next;
                cout << current->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else{
            cout << current->val << endl;
        }
    }

    return 0;
}