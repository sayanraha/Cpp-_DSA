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
Node *Minimum_Height_BST(vector<int> arr, int s, int e)
{
    if (s > e)
        return NULL;

    int mid = s + (e - s) / 2;
    Node *root = new Node(arr[mid]);
    root->left = Minimum_Height_BST(arr, s, mid - 1);
    root->right = Minimum_Height_BST(arr, mid + 1, e);
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
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int n = v.size();
    Node *root = Minimum_Height_BST( v, 0,n-1);
    LevelOrderPrint(root);
}