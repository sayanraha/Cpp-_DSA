#include <iostream>
using namespace std;
class Node
{
public:
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
Node *iterate(Node *root, int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }
    //Recursive case
    if (key < root->key)
    {
        root->left = iterate(root->left, key);
    }
    else
    {
        root->right = iterate(root->right, key);
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
    cout << root->key << " , ";
    Inorder(root->right);
}
bool search(Node *root, int a)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->key == a)
    {
        return true;
    }
    if (a < root->key)
    {
        return search(root->left, a);
    }
    else
    {
        return search(root->right, a);
    }
    return false;
}
Node *Min(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *remove(Node *root, int a)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (a < root->key)
    {
        root->left = remove(root->left, a);
    }
    else if (a > root->key)
    {
        root->right = remove(root->right, a);
    }
    else
    {
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            Node *temp = Min(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }
    }
    return root;
}
void printRange(Node *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }
    else if (root->key >= k1 and root->key <= k2)
    {
        printRange(root->left, k1, k2);
        cout << root->key << " ";
        printRange(root->right, k1, k2);
    }
    else if (root->key > k2)
    {
        printRange(root->left, k1, k2);
    }
    else
    {
        printRange(root->right, k1, k2);
    }
}

int main()
{
    Node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (int x : arr)
    {
        root = iterate(root, x);
    }
    Inorder(root);
    cout << endl;
    /* if (search(root, 14) == true)
    {
        cout << "Element present in the tree " << endl;
    }
    else
    {
        cout << "Element is not present in the tree" << endl;
    }*/
    /*  int key;
    cin >> key;
    //root = remove(root, key);
    Inorder(root);*/
    int k1, k2;
    cin >> k1 >> k2;
    cout << endl;
    cout<<"Elements in range "<<k1<<" and "<<k2<<" is :-"<<endl;
    printRange(root, k1, k2);
   
    return 0;
}