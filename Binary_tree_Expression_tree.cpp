#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string key;
    Node *left, *right;
    Node(string k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};
bool isOP(string data)
{
    if (data == "+" or data == "-" or data == "*" or data == "/")
    {
        return true;
    }

    return false;
}
int evalTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (!isOP(root->key))
    {
        return stoi(root->key);
    }
    if (root->key == "+")
    {
        return evalTree(root->left) + evalTree(root->right);
    }
    if (root->key == "-")
    {
        return evalTree(root->left) - evalTree(root->right);
    }
    if (root->key == "*")
    {
        return evalTree(root->left) * evalTree(root->right);
    }
    if (root->key == "/")
    {
        return evalTree(root->left) / evalTree(root->right);
    }
}
Node *buildTree()
{
    string d;
    getline(cin,d);
    if (d == NULL)
    {
        return NULL;
    }
    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}
int main()
{
    Node *root = buildTree();
    //LevelOrderPrint(root);
    cout << evalTree(root) << endl;
    return 0;
}