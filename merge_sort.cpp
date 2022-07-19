#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &a, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    while (i <= m and j <= e)
    {
        if (a[i] < a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }
    //COPY REMAINING ELEMENTS FROM 1ST ARRAY
    while (i <= m)
    {
        temp.push_back(a[i++]);
    }
    //COPY REMAINING ELEMENTS FROM 2ND ARRAY
    while (j <= e)
    {
        temp.push_back(a[j++]);
    }
    // COPY ALL ELEMENTS FROM TEMP TO THE ORIGINAL ARRAY
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        a[idx] = temp[k++];
    }
}
//SORTING METHOD
void mergesort(vector<int> &array, int s, int e)
{
    //BASE CASE
    if (s >= e)
    {
        return;
    }
    //RECURSIVE CASE
    int mid = (s + e) / 2;
    mergesort(array, s, mid);
    mergesort(array, mid + 1, e);
    return merge(array, s, e);
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
    mergesort(arr, 0, n);
    cout << "Sorted array is :" << endl;
    for (auto x : arr)
    {
        cout << x << " , ";
    }
    return 0;
}
