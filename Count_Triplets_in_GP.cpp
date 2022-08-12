#include <bits/stdc++.h>
using namespace std;
// Concept-> Hashing + Sliding Window
long countTriplets(vector<int> arr, int r)
{
    int n = arr.size();
    long ans = 0;
    unordered_map<long, long> right, left;

    for (auto x : arr)
    {
        right[x]++;
        left[x] = 0;
    }
    for (int i = 0; i < n; i++) // O(n)time complexity
    {
        right[arr[i]]--;
        if (arr[i] % r == 0)
        {
            long a = arr[i] / r;
            long b = arr[i];
            long c = arr[i] * r;
            ans += left[a] * right[c];
        }
        left[arr[i]]++;
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 16, 4, 16, 64, 16};
    int r = 4;
    cout << "Number of triplets in a given array is = "<<countTriplets(arr, r) << endl;
    return 0;
}