#include <bits/stdc++.h>
using namespace std;
int min = INT_MAX;
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
Node *insert(Node *root, int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
}
//Time complexity - O(N)
// Space complexity - O(1)
int Closest(Node *root, int target)
{
    int closest,diff = INT_MAX;
    Node *temp = root;
    while(temp != NULL)
    {
        int current_diff = abs(target - temp->data);
        if(current_diff == 0)
        {
            return closest;
        }
        if(current_diff < diff)
        {
            diff = current_diff;
            closest = temp->data;
        }
        if(target > temp->data)
        {
            temp = temp->right;
        }
        else{
            temp = temp->left;
        }
    }
    return closest;
}
int main()
{
    Node *root = NULL;
    vector<int> v = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (auto x : v)
    {
        root = insert(root, x);
    }
    int target = 5;
    cout << "Closest in BST is = " << Closest(root, target);
    cout << endl;
    return 0;
}