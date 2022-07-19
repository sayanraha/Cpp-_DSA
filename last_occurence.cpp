#include <bits/stdc++.h>
using namespace std;
int last_occ(int arr[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    int subIndex = last_occ(arr + 1, n - 1, key);
    if (subIndex == -1)
    {
        if (arr[0] == key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return (subIndex + 1);
    }
}
int main()
{
    int arr[] = {1, 3, 4, 2, 8, 4, 12, 10};
    int size = sizeof(arr) / sizeof(int);
    int key = 4;
    cout << "Last Occurence index of the element is = " << last_occ(arr, size, key) << endl;
}
