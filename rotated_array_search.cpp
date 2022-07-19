#include <bits/stdc++.h>
using namespace std;
int rotated_bin(vector<int> v, int x)
{
    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == x)
        {
            return mid;
        }
        if (v[s] <= v[mid])//left line
        {
            if (x >= v[s] and x <= v[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        
        else// right line
        {
            if (x >= v[mid] and x <= v[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int x;
    cout << "Input elements into the the vector :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int a;
    cout << "Enter element to be searched in the rotated array :-" << endl;
    cin >> a;
    int q = rotated_bin(v, a);
    if (q != -1)
    {
        cout << "Element present at index = " << q;
    }
    else
    {
        cout << "Element not present" << endl;
    }
    
}
