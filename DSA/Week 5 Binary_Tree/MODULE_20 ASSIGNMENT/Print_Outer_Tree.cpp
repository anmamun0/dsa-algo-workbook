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


void levelNode(Node *root){
    queue<Node*> q;
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

void leftNode(Node *root){
    if(root == NULL)
        return;
    leftNode(root->left);
    if(!root->left && root->right){
        leftNode(root->right);
    }
    if(root->left){
        cout << root->left->val << " ";
    }
    if(!root->left && root->right){
        cout << root->right->val << " ";
    }
}
void rightNode(Node *root){
    if(root == NULL)
        return;

    if(root->right){
            cout << root->right->val << " ";
        }
    else if(!root->right && root->left ){
        cout << root->left->val << " ";

    }

    rightNode(root->right);

    if(!root->right && root->left){
        rightNode(root->left);
    }
    
}
void Print_Outer_tree(Node *root){

    if(root->left){
        leftNode(root);
    }
    cout << root->val << " ";
    if(root->right){
        rightNode(root);
    }
}

int main()
{
    Node *root = inputTree();
    // levelOrder(root);
    Print_Outer_tree(root);

    return 0;
}