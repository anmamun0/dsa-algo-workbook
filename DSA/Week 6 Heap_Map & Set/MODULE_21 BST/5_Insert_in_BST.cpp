#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(Node *root){
    queue<Node *> q;
    if(root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    
}

Node * inputTree(){
    int val;
    cin >> val;
    queue<Node *> q;
    Node *root;
    if(val==-1)
        root = NULL;
    else
        root = new Node(val);
    if(root)
        q.push(root);

    while (!q.empty())
    {
        Node *pa = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if(l==-1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if(r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        if(myleft)
            pa->left = myleft;
        if(myright)
            pa->right = myright;
        
        if(pa->left)
            q.push(pa->left);
        if(pa->right)
            q.push(pa->right);
    }
    return root;
}
bool search(Node *root, int x) // Time complexity = O(depthHight);
{  
    if(root==NULL)
        return false;
    if(root->val==x)
        return true;


    if(x<root->val){
        return search(root->left,x);
    }
    else{
        return search(root->right, x);
    }
}
void insert_BST(Node *&root,int x){
    if(root == NULL){
        root = new Node(x);
        return;
    }
    if(x<root->val)
    {
        if(root->left == NULL){
            root->left = new Node(x);
        }
        else{
            insert_BST(root->left,x);
        }
    }
    else{
        if(root->right == NULL){
            root->right = new Node(x);
        }
        else{
            insert_BST(root->right, x);
        }
    }
}
int main()
{

    Node *root = inputTree();

    int x;
    cin >> x;

    insert_BST(root, x);
    
    levelOrder(root);

    return 0;
}