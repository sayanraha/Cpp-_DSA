#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int x, int y)
{
    return x < y;
}
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, compare); //Inbuilt Sort Function
    cout << "Sorted array is :-" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}