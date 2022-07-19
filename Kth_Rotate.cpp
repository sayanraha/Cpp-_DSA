//Program of Kth rotate of an array clockwise
#include <iostream>
using namespace std;
void rotate(int arr[],int x,int y)
{
   int l = x,r=y;
   while(l<r)
   {
       swap(arr[l],arr[r]);
       l++;
       r--;
   }
}
int main()
{
    
    int n,k,d;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the value of K"<<endl;
    cin>>k;
    k = k%n;
    if(k<0)
    {
        k = k+n;
    }
     d = n-k-1;
    cout<<"Enter elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate(arr,0,d);
    rotate(arr,n-k,n-1);
    rotate(arr,0,n-1);
    cout<<"The Kth rotated array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}