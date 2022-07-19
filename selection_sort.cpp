//Selection sort Algorithm code
#include <iostream>
using namespace std;
void selection(int arr[], int n)
{
    int min;
    for (int i = 0; i <= n - 2; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
int main()
{
    int arr[20], n;
    cout << "Enter the number of elements " << endl;
    cin >> n;
    cout << endl;
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection(arr, n);
    cout << "The Sorted array is :- " << endl;
    for (int i = 0;i<n;i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;
}