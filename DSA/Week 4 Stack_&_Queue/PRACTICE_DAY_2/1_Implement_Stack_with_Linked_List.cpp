/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
  

public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz =0;

    Stack()
    {
        //Write your code here
    }

    int getSize()
    {
        //Write your code here
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here
         if(sz==0){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node *newNode = new Node (data);

        if(head == NULL){
            head= newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        //Write your code here
        if(head == NULL){
            tail = NULL;
            return;
        }

        sz--;
        if(head==tail){
            head = NULL;
            tail = NULL;
            delete head;
            delete tail;
            return;
        }
        Node *temp = head;
        while(temp->next->next !=NULL){
            temp = temp->next;
        }
        tail = temp;
        delete temp->next;
        tail->next = NULL;  

    }

    int getTop()
    {
        //Write your code here
        if(head == NULL){
            return -1;
        } 
        
        return tail->data;
        
    }
};