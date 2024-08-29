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
int main()
{
    Node *head = NULL;
    while(true){
        cout << "Option 1: Inset Linked_list Tail -> " << endl;
        cout << "Option 2: Print Linked List ->" << endl;
        cout << "Option 3: Insert Index Item ->" << endl;
        cout << "Option 4: Insert head item -> " << endl;
        cout << "Option 5: Break List" << endl;

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
        else if(option ==3){
            cout << "Input Possition: ";
            int pos;
            cin >> pos;
            cout << "Input New Item: ";
            int v;
            cin >> v;

            Insert_index_item(head, pos, v);
            cout << "Inserted.....";
        }
        else if(option==4){
            cout << "Input head Item : ";
            int v;
            cin >> v;
            Insert_head(head, v);
        }
        else if (option == 5){
            break;
        }
        else{
            break;
        }
    }
    return 0;
}