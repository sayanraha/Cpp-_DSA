#include <bits/stdc++.h>
using namespace std;
int count_Subsets(vector<int> arr, int n, int i, int X)
{
    // BASE CASE
    if (i == n)
    {
        if (X == 0)
        {
            return 1;
        }
        return 0;
    }
    // RECURSIVE CASE
    int include = count_Subsets(arr, n, i + 1, X - arr[i]);
    int exclude = count_Subsets(arr, n, i + 1, X);
    return include + exclude;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int X = 6;
    int n = arr.size();
    cout << count_Subsets(arr, n, 0, X);
}