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

bool find_x(Node *root, int x){
    queue<Node *> q;
    if(root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if(f->val == x)
            return true;
        

        
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
        
    }
    return false;
}

bool find_xx(Node *root, int x){
    if(root == NULL)
        return false;
    if(root->val == x)
        return true;

    bool l = find_xx(root->left, x);
    bool r = find_xx(root->right, x);

    if(l==true || r == true)
        return true;
    else
        return false;
    // return (l || r);
}

int main()
{

    Node *root = inputTree();
    // levelOrder(root);

    int x;
    cin >> x;

    if(find_x(root,x))
        cout << "true" << endl;
    else
        cout << "flase" << endl;
    return 0;
}