#include <bits/stdc++.h>
using namespace std;
bool divide_among_K(int arr[],int n,int k,int limit)
{
    int partition = 0;
    int current_friend = 0;
    for(int i =0;i<n;i++)
    {
        if(current_friend+arr[i]>=limit)
        {
            partition++;
            current_friend = 0;
        }
        else{
            current_friend += arr[i];
        }
    }
    return partition>=k;
}
int k_Partitions(int arr[], int n, int k)
{
    int s = 0;
    int e = accumulate(arr, arr + n, 0);
    int ans, mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        bool isPossible = divide_among_K(arr, n, k, mid);
        if (isPossible)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {10, 25, 43, 54};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    cout<<k_Partitions(arr,n,k);
}