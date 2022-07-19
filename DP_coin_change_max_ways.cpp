#include <bits/stdc++.h>
using namespace std;
int combinations(int n, int m, int coins[])
{
    int include, exclude, i, j;
    int table[n + 1][m];
    for (i = 0; i < m; i++)
    {
        table[0][i] = 1;
    }
    // Bottom up approach
    for (i = 1; i < n + 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            include = ((i - coins[j]) >= 0 )? table[i - coins[j]][j] : 0;
            exclude = (j >= 1) ? table[i][j - 1] : 0;
            table[i][j] = include + exclude;
        }
    }
    return table[n][m - 1];
}
int main()
{
    int coins[] = {4,3,2,1};
    int n = 4; // Sum
    int m = sizeof(coins) / sizeof(coins[0]);
    cout << "Total combinations is = " << combinations(n, m, coins);
}