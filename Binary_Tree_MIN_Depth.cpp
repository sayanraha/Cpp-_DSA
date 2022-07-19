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
/* Recursive approach[DFS approach], Time complexity of O(N) in worst case senario */
int Mindepth(Node *root)
{
    if (root == NULL) //Condition for no element in the tree
    {
        return 0;
    }
    if (root->left == NULL and root->right == NULL) //Condition for the leaf nodes
    {
        return 1;
    }
    if (root->left == NULL) //Condition means left subtree is NULL the traverse only in right subtree
    {
        return Mindepth(root->right) + 1;
    }
    if (root->right == NULL) //Condition means right subtree is NULL the traverse only in left subtree
    {
        return Mindepth(root->left) + 1;
    }
    return min(Mindepth(root->left), Mindepth(root->right)) + 1;
}
int main()
{
    Node *root = LevelOrderBuild();
    cout<<endl;
    LevelOrderPrint(root);
    cout << "Minimum depth of a binary tree is = " << Mindepth(root);
    return 0;
}