#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    return a * power(a,n-1);
}
int main()
{
    int x,y;
    cout<<"Enter a number :"<<endl;
    cin>>x;
    cout<<"Enter the power of the number :"<<endl;
    cin>>y;
    cout<<"The result is = "<<power(x,y)<<endl;
    return 0;
}