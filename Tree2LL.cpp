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
class LinkedList
{
public:
    Node *head, *tail;
};
LinkedList tree2LL(Node *root)
{
    LinkedList l, leftll, rightll;
    if (root == NULL)
    {
        l.head = l.tail = NULL;
        return l;
    }
    if (root->left == NULL and root->right == NULL)
    {
        l.head = l.tail = root;
        return l;
    }
    else if (root->left != NULL and root->right == NULL)
    {
        leftll = tree2LL(root->left);
        leftll.tail->right = root;
        l.head = leftll.head;
        l.tail = root;
    }
    else if (root->left == NULL and root->right != NULL)
    {
        rightll = tree2LL(root->right);
        root->right = rightll.head;
        l.head = root;
        l.tail = rightll.tail;
    }
    else
    {
        leftll = tree2LL(root->left);
        rightll = tree2LL(root->right);
        leftll.tail->right = root;
        root->right = rightll.head;
        l.head = leftll.head;
        l.tail = rightll.tail;
    }
    return l;
}
Node *iterate(Node *root, int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }
    // Recursive case
    if (key < root->data)
    {
        root->left = iterate(root->left, key);
    }
    else
    {
        root->right = iterate(root->right, key);
    }
    return root;
}
int main()
{
    Node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (int x : arr)
    {
        root = iterate(root, x);
    }
    LinkedList l = tree2LL(root);
    Node *temp = l.head;
    while (temp != NULL)
    {
        cout << temp->data << "--->";
        temp = temp->right;
    }
}