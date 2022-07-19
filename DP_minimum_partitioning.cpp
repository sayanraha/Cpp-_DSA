#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> arr)
{
    int n = arr.size();
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+= arr[i];
    }
    bool dp[n+1][sum+1];
    //Fill the first columne of the dp array with true's
    for(int i=0;i<n;i++)
    {
        dp[i][0]=true;
    }
    //Fill the top most row except dp[0][0]with false
    for(int i = 1;i<=sum;i++)
    {
        dp[0][i]=false;
    }
    //Now fill the dp array in bottom up appraoch
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=sum;j++)
        {
            //Exclude the ith term 
            dp[i][j] = dp[i-1][j];

            //Include the ith term
            if(arr[i-1]<=j)
            {
                dp[i][j] |= dp[i-1][j-arr[i-1]];
            }
        }
    }
    int diff = INT_MAX;
    for(int j = sum/2;j>=0;j--)
    {
        if(dp[n][j]==true)
        {
            diff = sum - 2*j;
            break;
        }
    }
    return diff;
}
int main()
{
    vector<int> arr = {3,2,7};
    cout<<"Minimum difference is = "<<partition(arr)<<endl;
    return 0;
}