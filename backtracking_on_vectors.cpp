#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void fillVector(vector<int> &v,int i,int n,int val)
{
    if(i==n)
    {
        printVector(v,n);
        return;
    }
    v[i]= val;
    fillVector(v,i+1,n,val+5);
    //Backtracking step
    v[i]= -1*v[i];
    
}
int main()
{
    
    int n;
    cin>>n;
    vector<int> a(n);
    fillVector(a,0,n,10);
    printVector(a,n);
}