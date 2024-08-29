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
int level(Node *root, int x){
    queue < pair<Node *, int> > q;

    if(root)
        q.push({root,1});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();

        if(pr.first->val == x){
            return pr.second;
        }

        if(pr.first->left)
            q.push({pr.first->left, pr.second + 1});
        if(pr.first->right)
            q.push({pr.first->right, pr.second + 1});
    }
    return 0;
}
int main()
{
    Node *root = inputTree();
    int node;
    cin >> node;

    int node_level = level(root, node);
    cout << node_level << endl;

    return 0;
}