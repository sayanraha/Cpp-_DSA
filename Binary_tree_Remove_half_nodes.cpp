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
Node *removeHalfnode(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    root->left = removeHalfnode(root->left);
    root->right = removeHalfnode(root->right);
    if (root->left == NULL and root->right == NULL)
    {
        return root;
    }
    if (root->left == NULL)
    {
        Node *new_root = root->right;
        delete root;
        return new_root;
    }
    if (root->right == NULL)
    {
        Node *new_root = root->left;
        delete root;
        return new_root;
    }
    return root;
}
void LevelOrderPrint(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        if (temp == NULL)
        {
            cout << endl;
            q.pop();
            //Inserting a new null for the next level
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
Node *LevelOrderBuild()
{
    int d;
    cin >> d;
    Node *root = new Node(d);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            current->left = new Node(c1);
            q.push(current->left);
        }
        if (c2 != -1)
        {
            current->right = new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}
void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " , ";
    Inorder(root->right);
}
int main()
{
    Node *root = LevelOrderBuild();
    cout<<endl;
    LevelOrderPrint(root);
    removeHalfnode(root);
    cout<<endl;
   cout<<"Inorder traversal of the updated binary tree -> " Inorder(root);
    return 0;
}