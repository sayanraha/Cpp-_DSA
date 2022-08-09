#include<bits/stdc++.h>
using namespace std;

class node{

public:
	int data;
	node*left;
	node*right;
	
	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

void printDistanceK(vector<int> &v,node *root,int k)
{
    if(root == NULL)
    {
        return;
    }
    if(k==0)
    {
        v.push_back(root->data);
    }
    printDistanceK(v,root->left,k-1);
    printDistanceK(v,root->right,k-1);
    return;
}
int printNodeAtDistanceK(vector<int> &v,node* root,node* target,int k)
{
    if(root == NULL)
    {
        return -1;
    }
    if(root==target)
    {
        printDistanceK(v,root,k);
        return 0;
    }
    
    int DL = printNodeAtDistanceK(v,root->left,target,k);
    if(DL!=-1)
    {
        if(DL+1==k)
        {
            v.push_back(root->data);
        }
        else
        {
            printDistanceK(v,root->right,k-DL-2);
        }
        return 1 + DL;
    }
    int DR = printNodeAtDistanceK(v,root->right,target,k);
    if(DR!=-1)
    {
        if(DR+1==k)
        {
            v.push_back(root->data);
        }
        else
        {
            printDistanceK(v,root->left,k-DR-2);
        }
        return 1 + DR;
    }
    return -1;
}
vector<int> nodesAtDistanceK(node *root, node *target, int k){
    //return a SORTED vector of the nodes
    vector<int> v;
    printNodeAtDistanceK(v,root,target,k);
    sort(v.begin(),v.end());
    return v;
    
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->right = new node(6);
    root->left->right->left = new node(7);
    root->left->right->right = new node(8);
    root->left->right->right->left = new node(9);
    root->left->right->right->right = new node(10);

    // Target Node
    node* target = root->left->right;
    int k = 2;
    vector<int> res = nodesAtDistanceK(root, target, k);
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}