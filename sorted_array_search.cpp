//Sorted array search array program
#include <bits/stdc++.h>
using namespace std;
pair<int, int> staircase(int arr[][10], int n, int m, int key)
{
    //Condition if element not present
    if (key < arr[0][0] and key > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }
    //Staircase algorithm
    else
    {
        int row = 0, col = m - 1;
        while (row <= n - 1 and col >= 0)
        {
            if (arr[row][col] == key)
            {
                return {row, col};
            }
            else if (arr[row][col] > key)
            {
                col--;
            }
            else
            {
                row++;
            }
        }
    }
    return {-1, -1};
}
int main()
{
    int n, m, arr[10][10], key;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "Enter the number of columns" << endl;
    cin >> m;
    arr[n][m];
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Enter the element to be searched" << endl;
    cin >> key;
    pair<int, int> coord = staircase(arr, n, m, key);
    cout<<"Coordinates of the searched element is :-"<<endl;
    cout << coord.first << "," << coord.second << endl;
    return 0;
}