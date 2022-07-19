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
    Node *temp = new Node(d);
    temp->left = buildTree();
    temp->right = buildTree();
    return temp;
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
void mirror(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        Node *temp;

        mirror(root->left);
        mirror(root->right);

        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}
Node *mirrorBST(Node *root)
{
    mirror(root);
    return root;
}
int main()
{
    Node *root = buildTree();
    LevelOrderPrint(root);
    cout<<endl;
    Node *new_root = mirrorBST(root);
    LevelOrderPrint(new_root);
    return 0;
}