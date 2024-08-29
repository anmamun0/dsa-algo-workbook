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

bool special_Tree(Node *root){
    // if(root == NULL){
    //     return true;
    // }
     if(root->left==NULL && root->right==NULL){
        return true;
    }
    if(root->left==NULL || root->right==NULL){
        return false;
    }
    bool l = special_Tree(root->left);
    bool r = special_Tree(root->right);

    if(l==false || r == false){
        return false;
    }
    return true;

}
int main()
{
    Node *root = inputTree();

    if(special_Tree(root))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}