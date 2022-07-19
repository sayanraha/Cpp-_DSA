#include <bits/stdc++.h>
using namespace std;
void spiral(int arr[][10], int n, int m)
{
    int startrow = 0, startcol = 0, endrow = n - 1, endcol = m - 1;
    //Outer loop to traverse array boundary
    while (startrow <= endrow and startcol <= endcol)
    {
        //Start row
        for (int col = startcol; col <= endcol; col++)
        {
            cout << arr[startrow][col] << " ";
        }
        //End Column
        for (int row = startrow + 1; row <= endrow; row++)
        {
            cout << arr[row][endcol] << " ";
        }
        //End Row
        for (int col = endcol - 1; col >= startcol; col--)
        {
            //Avoid Duplicate printing
            if (startrow == endrow)
            {
                break;
            }
            cout << arr[endrow][col] << " ";
        }
        //Start Column
        for (int row = endrow - 1; row > startrow; row--)
        {
            //Avoid duplicate printing
            if (startcol == endcol)
            {
                break;
            }
            cout << arr[row][startcol] << " ";
        }
        startrow++;
        endrow--;
        endcol--;
        startcol++;
    }
}

int main()
{
    int arr[10][10];
    int n, m;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "Enter the number of columns" << endl;
    cin >> m;
    cout << "Enter elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    spiral(arr, n, m);
    return 0;
}
