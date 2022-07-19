#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,6};
    int n = sizeof(arr)/sizeof(int);
   int *ptr = upper_bound(arr,arr+n,4);
   
    cout<<(*ptr);
}