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
void print_linked_list(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "  ";
        temp = temp->next;
    }
}
void Duplicat(Node *head, int frq[]){

    Node *temp = head;
    while (temp!= NULL)
    {
        frq[temp->val]++;
        temp = temp->next;
    }
    
    bool flag = false;

    for (int i = 0; i <= 100; i++)
    {   
        if(frq[i] > 1){
            flag = true;
            break;
        }
        // cout << frq[i] << " ";
    }
    if(flag == true){
            cout << "Yes - Duplicated Here" << endl;
    }
    else{
        cout << "No - NO Duplicated item; ";
    }
    
}
int main()
{
    Node *head = NULL;

    cout << "Insert Item : -> ";
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

    int frq[105]={0};

    Duplicat(head, frq);

    return 0;
}