//Input -> 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//Preorder->
//Inorder->
//PostOrder->
#include <iostream>
#include <queue>
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
void preOrder(Node *root) //Preorder
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
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
void Postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " , ";
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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1 + max(h1, h2);
}
int diameter(Node *root) //TIME COMPLEXITY O(N^2)
{
    if (root == NULL)
    {
        return 0;
    }
    int D1 = height(root->left) + height(root->right); //O(n)times
    int D2 = diameter(root->left);                     //D2 AND D3 takes O(n)times
    int D3 = diameter(root->right);
    return max(D1, max(D2, D3));
}
class HDpair
{
public:
    int height;
    int diameter;
};
HDpair dia(Node *root)//Time Complexity -> O(N)
{
    HDprint p;
    if (root == NULL)
    {
        p.height = p.diameter = 0;
        return p;
    }
    HDpair Left = dia(root->left);
    HDpair Right = dia(root->right);

    p.height = max(Left.height, Right.height) + 1; //Height of each current node

    int D1 = Left.height + Right.height;
    int D2 = Left.diameter;
    int D3 = Right.diameter;

    p.diameter = max(D1, max(D2, D3));
    return p;
}
int main()
{
    // Node *root = buildTree();
    // preOrder(root);
    //Inorder(root);
    //Postorder(root);
    //cout<<"Level order print is :- "<<endl;
    Node *root = buildTree();
    LevelOrderPrint(root);
    cout << "Diameter is = " << diameter(root) << endl;
    cout << "Optimized diameter is = " << dia(root).diameter << endl;
    return 0;
}