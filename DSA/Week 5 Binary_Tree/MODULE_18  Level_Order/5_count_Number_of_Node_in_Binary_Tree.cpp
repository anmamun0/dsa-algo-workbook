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
Node* inputTree(){
    int val;
    cin >> val;
    Node *root;
    if(val==-1){
        root = NULL;
    }
    else {
        root = new Node(val);
    }

    queue<Node *> q;
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

        pa->left = myleft;
        pa->right = myright;

        if(pa->left){
            q.push(pa->left);
        }
        if(pa->right){
            q.push(pa->right);
        }

    }
    return root;
}

void preOrder(Node *root){
    if(root == NULL){
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}
int count (Node *root){
    if(root==NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}
int main()
{
    Node *root = inputTree();
    cout << count(root) << endl;

    return 0;
}