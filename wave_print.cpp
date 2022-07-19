//Wave print of a matrix
#include <bits/stdc++.h>
using namespace std;
void wave(int arr[][10], int n, int m)
{
    int endcol = m - 1;
    int startcol = 0;
    while (endcol >= startcol)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][endcol]<<" ";
        }
        endcol--;
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i][endcol]<<" ";
        }
        endcol--;
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
    wave(arr, n, m);
    return 0;
}