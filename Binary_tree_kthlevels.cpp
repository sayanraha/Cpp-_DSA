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
vector<int> printKthLevel(Node *root, int k)
{
    queue<Node *> q;
    q.push(root);
    int level = 0, flag = 0;
    vector<int> v;
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            Node *ptr = q.front();
            q.pop();
            if (level == k)
            {
                flag = 1;
                v.push_back(ptr->data);
            }
            else
            {
                if (ptr->left)
                {
                    q.push(ptr->left);
                }
                if (ptr->right)
                {
                    q.push(ptr->right);
                }
            }
        }
        level++;
        if (flag == 1)
        {
            break;
        }
    }
    return v;
}
int main()
{
    int k;
    cout << "Enter the value of K" << endl;
    cin>>k;
    Node *root = LevelOrderBuild();
    vector<int> x = printKthLevel(root, k);
   // sort(x.begin(), x.end());
   cout<<"Nodes at level "<<k<<" is "<<endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
}
