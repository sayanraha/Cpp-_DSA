#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int large = 0;
    for(int i=0;i<n;i++)
    {
        large = max(large,arr[i]);
    }
    return large;
}
int main()
{
    int arr[50];
    int n;
    cout<<"Enter the number of elements "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements in the array "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<largest(arr,n);
    return 0;

}