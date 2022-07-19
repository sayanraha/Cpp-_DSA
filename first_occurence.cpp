#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }
    int subIndex = firstOcc(arr + 1, n - 1, key);
    if (subIndex != -1)
    {
        return (subIndex + 1);
    }
    return -1;
}
int main()
{
    int arr[] = {14, 7, 12, 74, 35, 22, 41, 62};
    int size = sizeof(arr) / sizeof(int), key;
    cout << "Enter the element to be searched" << endl;
    cin >> key;
    if (firstOcc(arr, size, key) != -1)
        cout << "Element present at index = " << firstOcc(arr, size, key) << endl;
    else
    {
        cout << "Element not found !" << endl;
    }
    return 0;
}