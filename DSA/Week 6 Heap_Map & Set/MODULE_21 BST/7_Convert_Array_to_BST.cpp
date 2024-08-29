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
Node *convert(int a[],int N,int l,int r){
    if(l>r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a, N, l, mid - 1);
    Node *rightRoot = convert(a, N, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N;i++)
        cin >> a[i];
    Node *root = convert(a, N,0, N - 1);
    levelOrder(root);

    return 0;
}