#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &a, int s, int e)
{
    int piviot = a[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (a[j] < piviot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}
void quicksort(vector<int> &a, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(a, s, e);
    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int p;
    cout << "Enter elements into the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        arr.push_back(p);
    }
    quicksort(arr, 0, n - 1);
    cout << "Sorted array is :" << endl;
    for (auto x : arr)
    {
        cout << x << " , ";
    }
    return 0;
}
