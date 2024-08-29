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

void Insert_item_till(Node *&head, int v){
    Node *newNode = new Node(v);

    if (head == NULL){
        head = newNode;
    }
    else{

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void Insert_item_position(Node *head, int pos, int v){
    Node *newNode = new Node(v);

    Node *temp = head;
    for (int i = 1; i <=pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void Insert_item_head(Node *&head, int v){
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}

void Delete_position(Node *head, int pos){

    Node *temp = head;

    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    Node *deletedNode = temp->next;

    temp->next = temp->next->next;
    delete deletedNode;

}

void Delete_head(Node *&head){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void print_linked_list(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "  ";
        temp = temp->next;
    }
}


int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert linked list at tail -> " << endl;
        cout << "Option 2: Insert at any Position     -> " << endl;
        cout << "Option 3: Insert at Head             -> " << endl;
        cout << "Option 4: Delete from Position       -> " << endl;
        cout << "Option 5: Delete From Head           -> " << endl;
        cout << "Option 6: Print Your LInk LisT       -> " << endl;
        cout << "Option 7: Terminal                   ->" << endl;
        cout << " ------------------------------------->  ";

        int Option;
        cin >> Option;

        if(Option ==1){         //Option 1: Insert linked list at tail ->

            cout << "Insert item : ";
            while (true)
            {
                int val;

                cin >> val;
                if (val == -1)
                {
                    break;
                }
                else
                {
                    Insert_item_till(head, val);
                }
            }
            cout << "Included items..." << endl
                 << endl;
    
        }
        else if(Option ==2){        //Option 2: Insert at any Position     ->
            int pos, val;
            cout << "Input item Position: ";
            cin >> pos;
            cout << "Input item value: ";
            cin >> val;

            Insert_item_position(head, pos, val);
            cout << endl
                 << "Inserted..." << endl
                 << endl;
        }

        else if(Option ==3)         //Option 3: Insert at Head             ->
        {
            int val;
            cout<< "Input item value: ";
            cin >> val;
            Insert_item_head(head, val);

            cout << "Insert Head..." << endl
                 << endl;
        }

        else if(Option ==4){            //Option 4: Delete from Position       ->
            int pos;    
            cout << endl
                 << "Input item Position";
            cin >> pos;

            Delete_position(head, pos);
            cout << endl
                 << "Deleted..." << endl
                 << endl;
        }
        
        else if(Option ==5)             //Option 5: Delete From Head           ->
        {
            Delete_head(head);
            cout << endl
                 << "Deleted Head..." << endl
                 << endl;
        }

        else if(Option ==6)             //Option 6: Print Your LInk LisT       ->
        {
            cout << endl
                 << "Here YOur Linked Item's : ";

            print_linked_list(head);

            cout << endl
                 << "Print out..." << endl
                 << endl;
        }

        else if(Option ==7){            //Option 7: Terminal                   ->
            break;
        }
    }

    return 0;
}