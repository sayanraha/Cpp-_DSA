//Printing sum of all the subarray in an array
#include<iostream>
using namespace std;
void sum_subarray(int arr[],int n)
{
    int i,j,k;
    int sum = 0;
    //int a[]={0},x=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                sum = sum + arr[k];
                //a[x]= sum;
               // cout<<arr[k]<<" , ";
            }
            cout<<sum;
            //x = x+1;
            sum = 0;
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
    sum_subarray(arr,n);

}