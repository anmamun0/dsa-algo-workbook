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
void Insert_Linked_list_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int Linkd_list_index_find(Node *head, int val){
    Node *temp = head;
    int count = 0;
    int flag = -1;

    while(temp!=NULL){
        if (temp->val == val){
            flag = count;
            break;
        }
        count++;
        temp = temp->next;
    }
    if(flag == -1){
        return -1;
    }
    else{
        return flag;
    }
}
int main()
{


    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;

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
                Insert_Linked_list_tail(head, tail, val);
            }
        }

        int X;
        cin >> X;
        cout << Linkd_list_index_find(head, X) << endl;
    }

    return 0;
}