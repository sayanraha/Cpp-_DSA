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
bool check(Node *X, Node *Y)
{
    if (X == Y)
        return true;

    return (X and Y) and (X->data == Y->data) and
           ((check(X->left, Y->left) and check(X->right, Y->right)) or
            (check(X->right, Y->left) and check(X->left, Y->right)));
}
int main()
{
    Node *root1 = new Node(6);
    root1->left = new Node(3);
    root1->right = new Node(8);
    root1->left->left = new Node(1);
    root1->left->right = new Node(7);
    root1->right->left = new Node(4);
    root1->right->right = new Node(2);
    root1->right->left->left = new Node(7);
    root1->right->left->right = new Node(1);
    root1->right->right->right = new Node(3);

    Node *root2 = new Node(6);
    root2->left = new Node(8);
    root2->right = new Node(3);
    root2->left->left = new Node(2);
    root2->left->right = new Node(4);
    root2->left->left->left = new Node(3);
    root2->left->right->left = new Node(1);
    root2->left->right->right = new Node(7);
    root2->right->left = new Node(7);
    root2->right->right = new Node(1);

    if(check(root1,root2))
    {
        cout<<"Siblings"<<endl;
    }
    else{
        cout<<"Not Siblings"<<endl;
    }
    
}