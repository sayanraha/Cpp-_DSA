#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}
int Sum(Node *root)
{
    int res = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
        res += f->data;
    }
    return res;

}
int main()
{
    Node *root = buildTree();
    cout <<" Sum of all nodes of the binary tree is = " <<Sum(root);
}