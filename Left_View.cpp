//Left view of a binary tree
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
void Traverse(Node *root, int level, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }
    if (level == v.size())
    {
        v.push_back(root->data);
    }
    Traverse(root->left, level + 1, v);
    Traverse(root->right, level + 1, v);
}
vector<int> Left_View(Node *root)
{
    vector<int> v;
    int d = 0;
    Traverse(root, d, v);
    return v;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> res = Left_View(root);
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}