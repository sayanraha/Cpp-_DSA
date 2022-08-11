#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
Node *insert(Node *root,int val)
{
    if(root == NULL)
    {
        return new Node(val);
    }
    if(val < root->data)
    {
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}
Node *InorderSuccessor(Node *root,Node *target)
{
    //If right subtree of the target Node exist
    if(target->right !=NULL)
    {
        Node *temp = target->right;
        while(temp->left!=NULL)
        {
            temp = temp->left;
        }
        return temp;
    }

    //Otherwise
    Node *temp = root;
    Node * succ = NULL;
    while(temp != NULL)
    {
        if(temp->data > target->data)
        {
            succ = temp;
            temp = temp->left;
        }
        else if(temp->data < target->data)
        {
            temp = temp->right;
        }
        else{
            break;
        }
    }
    return succ;
}
int main(){

        vector<int> arr = {8,3,10,1,6,14,4,7,13};
        Node *root = NULL;
        for(auto x:arr)
        {
            root = insert(root,x);
        }
        Node *t1 = root->left->right->right;
        Node *t2 = root->right;

        cout<<"Inorder successor of 7 is = "<<InorderSuccessor(root,t1)->data<<endl;
        cout<<"Inorder successor of 10 is = "<<InorderSuccessor(root,t2)->data<<endl;

}