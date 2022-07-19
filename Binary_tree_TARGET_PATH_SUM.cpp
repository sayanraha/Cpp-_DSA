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
vector<vector<int>> vv;
void Help(Node *root, vector<int> &v, int a, int b)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL and root->right == NULL)
    {
        if (a == b + root->data)
        {
            v.push_back(root->data);
            vv.push_back(v);
            v.pop_back();
        }
        return;
    }
    if (root->left)
    {
        v.push_back(root->data);
        Help(root->left, v, a, b + root->data);
        v.pop_back();
    }
    if (root->right)
    {
        v.push_back(root->data);
        Help(root->right, v, a, b + root->data);
        v.pop_back();
    }
}
vector <vector<int>> TargetSum(Node *root, int tsum)
{
    vv.clear();
    vector<int> v;
    Help(root, v, tsum, 0);
    return vv;
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
int main()
{
    Node *root = LevelOrderBuild();
    cout<<endl;
    cout<<"Level order print is :- "<<endl;
    LevelOrderPrint(root);
    int temp;
    cout<<endl<<"Enter the value of target sum "<<endl;
    cin >> temp;

    vector<vector<int>> vec = TargetSum(root, temp);
    cout<<"All target path sum in the tree are :-"<<endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
        return 0;
    }