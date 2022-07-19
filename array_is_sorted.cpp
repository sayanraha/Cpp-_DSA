// Write a recursive function to check if a array is sorted or not.
#include <bits/stdc++.h>
using namespace std;
bool array_sort(int arr[], int n)
{
    if (n == 1 or n == 0)//BASE CASE
    {
        return true;
    }
    if (arr[0] < arr[1] and array_sort(arr + 1, n - 1))//RECURSIVE CASE
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = { 2, 5, 7,15,20,36,77};
    int size = sizeof(arr) / sizeof(int);
    if (array_sort(arr, size) == 0)
        cout << "Array is Not Sorted " << endl;
    else if (array_sort(arr, size) == 1)
        cout << "Array is Sorted " << endl;
    return 0;
}