#include<iostream>
using namespace std;
int largesum_subarray(int arr[],int n)
{
    int i,j,k;
    int largesum = 0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int subarraysum = 0;
            for(k=i;k<=j;k++)
            {
                subarraysum += arr[k];
            }
            largesum = max(largesum,subarraysum);
            //cout<<endl;
        }
    }
    return largesum;
        
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
    cout<<"The largest sum of the subbray is "<< largesum_subarray(arr,n)<<endl;
   return 0;
}