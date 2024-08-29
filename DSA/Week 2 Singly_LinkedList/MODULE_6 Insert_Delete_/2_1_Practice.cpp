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
void insert_link_list(Node *&head, int v){

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
void print_linked_list(Node *head){

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert linked item -> " << endl;
        cout << "Option 2: Print linked item -> " << endl;
        cout << "Option 3: Break -> " << endl;

        int op;
        cin >> op;
        if(op==1){
            cout << "Please!Enter Value -> ";
            int v;
            cin >> v;
            insert_link_list(head, v);
        }
        else if(op ==2 ){
            cout << "Your List : ";
            print_linked_list(head);
            cout << endl;
        }
        else if(op == 3){
            break;
        }
    }
    

    return 0;
}