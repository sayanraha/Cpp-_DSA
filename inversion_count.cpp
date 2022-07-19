#include <bits/stdc++.h>
using namespace std;
int merge(vector<int> &arr, int s, int e)
{
    int i = s, m = (s + e) / 2, j = m+1;
    vector<int> temp;
    int cnt = 0;
    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            cnt = cnt + m - i + 1;
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= m)
    {
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k++];
    }
    return cnt;
}
int inversion_count(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return 0;
    }
    int mid = (s + e) / 2;
    int c1 = inversion_count(arr, s, mid);
    int c2 = inversion_count(arr, mid + 1, e);
    int c3 = merge(arr, s, e);
    return c1 + c2 + c3;
}
int main()
{
    vector<int> v;
    int val;
    int n;
    cout << "Enter size of the array :-" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
       
    }
    cout << "Inversion count in the array is = " << inversion_count(v, 0, v.size() - 1) << endl;
}