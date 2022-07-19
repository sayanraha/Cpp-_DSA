#include <bits/stdc++.h>
using namespace std;
int gridways(int i, int j, int m, int n)
{
    if (i == m - 1 or j == n - 1)
    {
        return 1;
    }
    if (i >= m or j >= n)
    {
        return 0;
    }
    int ans = gridways(i + 1, j, m, n) + gridways(i, j + 1, m, n);
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << "Total number of grid ways are = " << gridways(0, 0, m, n);
    return 0;
}