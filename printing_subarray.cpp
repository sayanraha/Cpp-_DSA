//Program to print all the subarrays
#include<iostream>
using namespace std;
void print_subarray(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                cout<<arr[k]<<" , ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int arr[15];
    int n,i;
    cout<<"Enter the number of elements"<<endl;
    cin>> n;
    cout<<endl;
    cout<<"Enter elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    print_subarray(arr,n);

}