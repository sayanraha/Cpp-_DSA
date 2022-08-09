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
void TreeTraversal(Node *root, int d, map<int, vector<int>> &m)
{
    if (root == NULL)
    {
        return;
    }
    m[d].push_back(root->data);
    TreeTraversal(root->left, d - 1, m);
    TreeTraversal(root->right, d + 1, m);
}
void VerticalOrderPrint(Node *root)
{
    map<int, vector<int>> m;
    int d = 0;
    TreeTraversal(root, d, m);
    for(auto it:m)
    {
        vector<int> res = it.second;
        for(auto x : res)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);
    root->right->right->right = new Node(9);

    VerticalOrderPrint(root);
    return 0;
}