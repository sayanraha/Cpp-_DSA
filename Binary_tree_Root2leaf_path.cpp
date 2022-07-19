#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *left, *right;
    Node(int d)
    {
        key = d;
        left = right = NULL;
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
void printAllpathsfromROOT2LEAF(Node *root,vector<int> &path)
{
    if(root == NULL)
    {
        return;
    }
    if(root->left==NULL and root->right ==NULL)
    {
        for(int node : path)
        {
            cout<<node<<"->";
        }
        cout<<root->key<<"->"<<"NULL";
        cout<<endl;
        return;
    }
    //Recursive case
    path.push_back(root->key);
    printAllpathsfromROOT2LEAF(root->left,path);
    printAllpathsfromROOT2LEAF(root->right,path);

    //Backtracking step
    path.pop_back();
    return;
}
int main()
{
    Node *root = buildTree();
    vector<int> v;
    printAllpathsfromROOT2LEAF(root,v);
    return 0;
}