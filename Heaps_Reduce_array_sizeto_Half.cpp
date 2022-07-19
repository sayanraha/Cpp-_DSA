#include <bits/stdc++.h>
using namespace std;

int reduceArraysize(vector<int> &arr)
{
    vector<int> v;
    sort(arr.begin(), arr.end());
    int c = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            c++;
        }
        else
        {
            v.push_back(c);
            c = 1;
        }
    }
    v.push_back(c);
    sort(v.begin(), v.end());
    int n = arr.size() / 2, ans = 0;
    for (int i = v.size() - 1; n > 0 && i >= 0; i--)
    {
        ans++;
        n = v[i]/2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 3, 3, 3, 5, 5, 5, 2, 2, 7};
    cout << reduceArraysize(arr);
    return 0;
}