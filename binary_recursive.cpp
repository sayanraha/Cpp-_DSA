#include <bits/stdc++.h>
using namespace std;
int binary(vector<int> arr, int l, int r, int x)
{
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            return binary(arr, l, mid - 1, x);
        }
        else
        {
           return binary(arr, mid + 1, r, x);
        }
    }
    return -1;
}
int binary_search(vector<int> v, int x)
{
    int index = binary(v, 0, v.size() - 1, x);
    return index;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int p;
    cout<<"Enter elements of your choice :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        v.push_back(p);
    }
    int m;
    cout << "Enter the element to be searched :" << endl;
    cin >> m;
    int q = binary_search(v, m);
    if (q != -1)
    {
        cout << "Element present at index = " << q << endl;
    }
    else
    {
        cout << "Element not present !!!" << endl;
    }
    return 0;
}