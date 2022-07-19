#include <bits/stdc++.h>
using namespace std;
int waterTrapped(vector<int> heights)
{
    int n = heights.size();
    if (n <= 2)
    {
        return 0;
    }
    vector<int> left(n, 0);
    left[0] = heights[0];
    vector<int> right(n, 0);
    right[n - 1] = heights[n - 1];
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], heights[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], heights[i]);
    }
    for (int i = 0; i < n; i++)
    {
        res = res + min(left[i], right[i]) - heights[i];
    }
    return res;
}
int main()
{
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Quantity of water trapped is = " << waterTrapped(heights) << endl;
}