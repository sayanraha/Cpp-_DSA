#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n,int j)
{
    if (n == 1)
    {
        return;
    }
    if(j==n-1)
    {
    
    return bubble_sort(arr, n - 1 , 0) ;
    }
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
        bubble_sort(arr,n,j+1);
}
int main()
{
    int arr[] = {10, -11, 1, 7, 22, 16, -77, 9};
    int size = sizeof(arr) / sizeof(int);
    bubble_sort(arr, size,0);
    cout << "Sorted array is :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " , " ;
    }
    return 0;
}