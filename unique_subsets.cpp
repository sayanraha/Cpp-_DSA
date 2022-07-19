#include<bits/stdc++.h>
using namespace std;
void uniquesubsets(int arr[],int i,int j,int n,int a[])
{
    if(i==n-1)
    {
        for(int k = 0;k<i;k++)
        {
            cout<<a[i]<<" ";
        }
        return;
    }


    if(arr[i]==arr[i+1])//checking for duplicates
    {
        continue;
    }
    a[j]=arr[i];
    uniquesubsets(arr,i+1,j+1, n, a);
    uniquesubsets(arr,i+1,j, n, a);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a[5]={0};
    uniquesubsets(arr,0,0,n, a);

}
