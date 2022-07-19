#include<bits/stdc++.h>
using namespace std;
void print_decreasing(int k)
{
    if(k==0)
    {
        return ;
    }
    cout<<k<<" , ";
    print_decreasing(k-1);
}
void print_increasing(int k)
{
    if(k==0)
    {
        return ;
    }
    print_increasing(k-1);
    cout<<k<<" , ";
}

int main()
{
    int a;
    cin>>a;
    print_decreasing(a);
    cout<<endl;
    print_increasing(a);
}
