#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i <= n - 1 and j <= m - 1)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i <= n - 1)
    {
        arr3[k++] = arr1[i++];
    }
    while (j <= m - 1)
    {
        arr3[k++] = arr2[j++];
    }
}
int main()
{
    int arr1[] = {5, 8, 9, 28, 34};
    int arr2[] = {4, 22, 25, 30, 33, 40, 42};
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);
    int arr3[n + m];
    merge(arr1, arr2, arr3, n, m);
    cout << "Merged sorted array is :- " << endl;
    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " , ";
    }
    return 0;
}