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
void delete_head(Node *&head){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    

    return 0;
}