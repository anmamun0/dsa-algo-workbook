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
void leftView(Node *root){
    queue< pair<Node*,int> > q;
    if(root)
        q.push({root, 1});

    bool flag[3000] = {false};

    while (!q.empty())
    {
        pair<Node *, int> pa = q.front();
        q.pop();


        if(flag[pa.second] == false){
            cout << pa.first->val << ' ';
            flag[pa.second] = true;
        }

        if(pa.first->left)
            q.push({pa.first->left, pa.second +1});
        if(pa.first->right)
            q.push({pa.first->right, pa.second + 1});
    }
    
}
int main()
{
    Node *root = inputTree();
    leftView(root);

    return 0;
}