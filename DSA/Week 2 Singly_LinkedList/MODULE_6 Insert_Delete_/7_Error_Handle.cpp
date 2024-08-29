#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val = val;
            this->next = NULL;

        }
};
void Insert_node(Node *&head, int v){
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
void Insert_Pos(Node *head,int pos, int v){
    Node *newNode = new Node(v);

    Node *temp = head;
    for (int i = 1; i <= pos - 1;i++){
        temp = temp->next;
        if(temp == NULL){
            cout << "Invalid Position" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;

    cout << endl
                 << "Inserted..." << endl
                 << endl;

}
void Insert_Head(Node *&head, int v){
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}

void Delete_Pos(Node *head, int pos){
    Node *temp = head;
    for (int i = 1; i <= pos - 1;i++){
        temp = temp->next;

        if(temp == NULL){
            cout << "Invalid Position-" << endl<<endl;
            return;
        }
    }
    if(temp->next == NULL){
        cout << "Invalid Position--" << endl<<endl;
            return;
    }
    Node *deleteNode = temp->next;

    temp->next = temp->next->next;
 
    delete deleteNode;
    cout << endl
                 << "Deleted..." << endl
                 << endl;
}

void Print_Node(Node *head){
    
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << "Print out..." << endl << endl;
}
void Delete_Head(Node *&head){
    if(head== NULL){
        cout << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Deleted Head..." << endl
                 << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert linked list at tail -> " << endl; // done
        cout << "Option 2: Insert at any Position     -> " << endl; // done
        cout << "Option 3: Insert at Head             -> " << endl; // done
        cout << "Option 4: Delete from Position       -> " << endl; // Done
        cout << "Option 5: Delete From Head           -> " << endl;
        cout << "Option 6: Print Your LInk LisT       -> " << endl;
        cout << "Option 7: Terminal                   ->" << endl;
        cout << "          ---------------------------->  ";

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
                    Insert_node(head, val);
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

            Insert_Pos(head, pos, val);
            
        }

        else if(Option ==3)         //Option 3: Insert at Head             ->
        {
            int val;
            cout<< "Input item value: ";
            cin >> val;
            Insert_Head(head, val);

            cout << "Insert Head..." << endl
                 << endl;
        }

        else if(Option ==4){            //Option 4: Delete from Position       ->
            int pos;    
            cout << endl
                 << "Input item Position : ";
            cin >> pos;

            Delete_Pos(head, pos);
            
        }
        
        else if(Option ==5)             //Option 5: Delete From Head           ->
        {
            Delete_Head(head);
            
        }

        else if(Option ==6)             //Option 6: Print Your LInk LisT       ->
        {
            cout << endl
                 << "Here Your Linked Item's : ";

            Print_Node(head);


        }

        else if(Option ==7){            //Option 7: Terminal                   ->
            break;
        }
    }

    return 0;
}