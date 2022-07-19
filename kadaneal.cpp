//Kadane's Algorithm
//Subarray Sum III
// Program of largest subarray sum using kadane's algorithm
#include <iostream>
using namespace std;
int kadane(int arr[],int n)
{
    int currsum = 0;
    int largest = 0;
    for(int i=0;i<n;i++)
    {
        currsum += arr[i];
        if(currsum <0)
        {
            currsum = 0;
        }
        largest = max(largest,currsum);
    }
    return largest;
}
int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1};
    int n = sizeof(arr)/sizeof(int);
    cout<<kadane(arr,n)<<endl;
    return 0;
}