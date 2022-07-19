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
bool Match(Node *root1, Node *root2)
{
    if (root1 != NULL and root2 != NULL)
    {
        bool a = Match(root1->left, root2->right);
        bool b = Match(root1->right, root2->left);
        if (root1->data == root2->data and (a and b))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (root1 == NULL and root2 == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Symmetric(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    return Match(root->left, root->right);
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
int main()
{
    Node *root = LevelOrderBuild();
    LevelOrderPrint(root);
    if(Symmetric(root)==true)
    {
        cout<<"Symmetric tree"<<endl;
    }
    else{
        cout<<"Not a Symmetric tree"<<endl;
    }
    return 0;
}