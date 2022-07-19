#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[] = {10,15,6,3,28};
    int n = sizeof(a)/sizeof(int);
    sort(a,a+n);
    for(auto x : a)
    {
        cout<<x<<",";
    }
    return 0;
}