#include <bits/stdc++.h>
using namespace std;

// Recursive approach (Time complexity -> O(2^N)
int knapsack(int wts[], int prices[], int N, int W)
{
    // base case
    if (N == 0 or W == 0)
    {
        return 0;
    }
    // Recursive case
    int inc = 0, exc = 0;
    if (wts[N - 1] <= W)
    {
        inc = prices[N - 1] + knapsack(wts, prices, N - 1, W - wts[N - 1]);
    }
    exc = knapsack(wts, prices, N - 1, W);
    return max(inc, exc);
}
// Bottom up approach (Time complexity -> O(N x W))
int knapsackDp(int wts[], int prices[], int N, int W)
{
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
    int n, w;
    for (n = 1; n <= N; n++)
    {
        for (w = 1; w <= W; w++)
        {
            int inc = 0, exc = 0;
            if (wts[n - 1] <= w)
            {
                inc = prices[n - 1] + dp[n - 1][w - wts[n - 1]];
            }
            exc = dp[n - 1][w];
            dp[n][w] = max(inc, exc);
        }
    }
    return dp[N][W];
}

int main()
{
    int wts[] = {2, 7, 3, 4};
    int prices[] = {5, 20, 20, 10};
    int N = 4, W = 11;
   // cout << knapsack(wts, prices, N, W) << endl;
    cout << knapsackDp(wts, prices, N, W) << endl;
}