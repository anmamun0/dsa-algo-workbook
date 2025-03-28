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

void Insert_index_item(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void Insert_head(Node *&head,int v){
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void delete_item(Node *head,int pos){
    Node *temp = head;
    
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    delete deleteNode;
}

void delete_head(Node *&head){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    while(true){
        cout << "Option 1: Inset Linked_list Tail -> " << endl;
        cout << "Option 2: Print Linked List ->" << endl;
        cout << "Option 3: Insert Index Item ->" << endl;
        cout << "Option 4: Insert head item -> " << endl;
        cout << "Option 5: Delete any position -> " << endl;
        cout << "Option 6: Delete Head -> " << endl;
        cout << "Option 7: Terminal" << endl;

        int option;
        cin >> option;

        if(option ==1 ){
            cout << "Enter value:  ";
            int v;
            cin >> v;
            Insert_linked_list_till(head, v);
        }

        else if (option == 2)
        {
            cout << "Your Linked List Items: -> ";
            Print_Linked_list(head);
        }


        else if (option == 3)
        {
            cout << "Input Possition: ";
            int pos;
            cin >> pos;
            cout << "Input New Item: ";
            int v;
            cin >> v;
            if (pos == 0)
            {
                Insert_head(head, v);
            }
            else
            {
                Insert_index_item(head, pos, v);
                cout << "Inserted....." << endl;
            }
        }

        else if(option==4){
            cout << "Input head Item : ";
            int v;
            cin >> v;
            Insert_head(head, v);
        }

        else if(option ==5 ){
            cout << "Input Delete Position: ";
            int pos;
            cin >> pos;
            delete_item(head, pos);
            cout << "Delete positon of " << pos << endl;
            
        }
        else if(option ==6 ){
            delete_head(head);
        }
        else if (option == 7){
            break;
        }
        else{
            break;
        }
    }
    return 0;
}
