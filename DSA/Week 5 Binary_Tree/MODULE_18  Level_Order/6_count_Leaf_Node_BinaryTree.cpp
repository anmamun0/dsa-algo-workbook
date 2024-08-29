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
void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty()){
        Node *pa = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        pa->left = myleft;
        pa->right = myright;
        if (pa->left){
            q.push(pa->left);
        }
        if (pa->right){
            q.push(pa->right);
        }
    }
    return root;
}
int countLeaf(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL){
        return 1;
    }
    else{
        int l = countLeaf(root->left);
        int r = countLeaf(root->left);
        return l + r;
    }
}
int main()
{
    Node *root = inputTree();
    levelOrder(root);
    cout << endl
         << countLeaf(root) << endl; // LeafNode == 4;

    Node *root2 = inputTree();
    levelOrder(root2);
    cout << endl
         << countLeaf(root2) << endl; // LeafNode == 3;
    return 0;
}