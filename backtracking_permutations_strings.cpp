#include<bits/stdc++.h>
using namespace std;
void permutation(string a,int s,int e)
{
    //BASE CASE
    if(s==e)
    {
        cout<<a<<" ";
        return;
    }
    for(int i=s;i<=e;i++)
    {
        
        swap(a[i],a[s]);//SWAPING 
        permutation(a,s+1,e);//RECURSIVE CALL
        swap(a[i],a[s]);//BACKTRACKING
    }
}
int main()
{
    string v;
    getline(cin,v);
    permutation(v,0,v.length()-1);
}