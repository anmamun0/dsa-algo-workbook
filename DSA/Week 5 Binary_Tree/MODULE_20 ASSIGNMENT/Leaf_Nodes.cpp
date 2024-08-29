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

vector<int> v;
void leafNode(Node* root){
    if(root==NULL)
        return;
    if(root->left == NULL && root->right==NULL){
        // cout << root->val << " ";
        v.push_back(root->val);
    }
    leafNode(root->left);
    leafNode(root->right);
}
int main()
{
    Node *root = inputTree();
    // levelOrder(root);
    if(root){
        leafNode(root);
    }
    sort(v.begin(), v.end(), greater<int>());
    int sz = v.size() - 1;
    for (int i = 0; i <=sz; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}