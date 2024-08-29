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

void Insert_linked_list_till(Node *&head, int v){
    Node *newNode = new Node(v);

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void Print_Linked_list(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    while(true){
        cout << "Option 1: Inset Item -> " << endl;
        cout << "Option 2: Print List ->" << endl;
        cout << "Break List" << endl;

        int option;
        cin >> option;

        if(option ==1 ){
            cout << "Enter value:  ";
            int v;
            cin >> v;
            Insert_linked_list_till(head, v);
        }
        else if(option ==2 ){
            cout << "Your Linked List Items: -> ";
            Print_Linked_list(head);
        }
        else if (option == 3){
            break;
        }
        else{
            break;
        }
    }
    return 0;
}