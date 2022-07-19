#include <iostream>
using namespace std;
void  reverse(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    while(s<e)
    {
    swap(arr[s],arr[e]);
    {
    s = s+1;
    e = e-1;
    }
    }
}
int main()
{
    int arr[50];
    int n,i,key;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<" The array is ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    reverse(arr,n);
    cout<<endl;
    cout<<" The reverse array is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}