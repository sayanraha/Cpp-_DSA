// CODE FOR largest SUBARRAY SUM(II)PREFIX
//Time complexity = O(N^2)
#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    //Prefix Sums
    int prefixsum[50]={0};
    prefixsum[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        prefixsum[i]= prefixsum[i-1]+arr[i];
    }
    int largestsum = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraysum = i>0? prefixsum[j]-prefixsum[i-1]:prefixsum[j];
            largestsum = max(largestsum,subarraysum);
        }
    }
    return largestsum;

}
int main()
{
    int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<largest(arr,n)<<endl;
    return 0;
}