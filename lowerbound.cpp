#include<iostream>
using namespace std;
int low_bound(int arr[],int n,int val)
{
    int lower = -1;
    for(int i=0;i<n;i++)//Brute force approach[Concept of linear search algorithm]
    {
        if(val == arr[i]|| val - 1 == arr[i])
        {
            lower = arr[i];
        }
    }
    return lower;
}
int main()
{
    int arr[50];
    int n,val;
    cout<<"Enter the number of elements "<<endl;
    cin>>n;

    cout<<"Enter elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the integer value"<<endl;
    cin>>val;
    cout<<"Lower Bound in the array is = "<< low_bound(arr,n,val)<<endl;
    return 0;
}