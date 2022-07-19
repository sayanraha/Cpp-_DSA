#include<bits/stdc++.h>
using namespace std;
int helper(int n,vector<int> v,int s,int e)
{
    if(s==e || s==e-1)
    {
        return max(v[s],v[e]);
    }
    int op1 = v[s]+min(helper(n,v,s+2,e),helper(n,v,s+1,e-1));
    int op2 = v[e]+min(helper(n,v,s+1,e-1),helper(n,v,s,e-2));
    return max(op1,op2);
}
int Maxval(int n,vector<int> arr)
{
   int res = helper(n,arr,0,n-1);
   return res;
}
int main()
{
   vector<int> arr = {1,2,3,4};
   int n = 4;
   cout<<Maxval(n,arr);
   cout<<endl;
   return 0;
}