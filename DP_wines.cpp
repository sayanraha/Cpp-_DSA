#include <bits/stdc++.h>
using namespace std;
// Top down approach
int wines(int dp[][10], int prices[], int L, int R, int y)
{
    // Base case
    if (L > R)
    {
        return 0;
    }
    // need to check if a state is already computed
    // The state only depends on L and R
    if (dp[L][R] != 0)
    {
        return dp[L][R];
    }

    int pick_left = y * prices[L] + wines(dp, prices, L + 1, R, y + 1);
    int pick_right = y * prices[R] + wines(dp, prices, L, R - 1, y + 1);
    return dp[L][R] = max(pick_left, pick_right);
}
int wines_bottom_up(int prices[], int n)
{
    vector<vector<int>> dp(n, vector<int>(n + 1, 0));
    int i, j;
    for (i = n - 1; i >= 0; i--) // Iterating from bottom row to the top row

    {
        for (j = 0; j < n; j++)
        {
            if(i==j)
            {
                dp[i][i]=n*prices[i];
            }
           else if (i < j)
            {
                // dp[i][j]
                int y = n - (j - i);
                int pick_left = prices[i] * y + dp[i + 1][j];
                int pick_right = prices[j] * y + dp[i][j - 1];
                dp[i][j] = max(pick_left, pick_right);
               
            }
        }
    }
    cout<<endl;
    for( i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[0][n-1];
}
int main()
{
    int a[] = {2, 3, 5, 1, 4}; // Prices
    int n = 5;
    int dp[10][10] = {0};
    // cout << "Maximum profit is = " << wines(dp, a, 0, n - 1, 1);
     
    cout << "Maximum profit is = " << wines_bottom_up(a, n)<<endl;
   

}