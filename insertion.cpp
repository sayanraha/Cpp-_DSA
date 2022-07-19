//Insertion sort algorithm
#include <iostream>
using namespace std;
void insertion(int arr[], int n)
{
    int i, j;
    for (i = 1; i <= n - 1; i++)
    {
        int current = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = current;
    }
}
int main()
{
    int arr[20];
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion(arr, n);
    cout << "Sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}